
import java.io.File;
import java.io.FileWriter;
import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Paths;

public class FileEncryptionDecryption {

    public static String readFileAsSingleString(String pathToFile) throws IOException {
        return new String(Files.readAllBytes(Paths.get(pathToFile)));
    }

    public static String encrypted(String value, int key) {
        char[] fun = value.toCharArray();
        for (int i = 0; i < value.length(); i++) {
            int a = fun[i];
            a = a + key;
            fun[i] = (char) a;
        }
        value = String.valueOf(fun);
        return value;
    }

    public static String decrypted(String value, int key) {
        char[] fun = value.toCharArray();
        for (int i = 0; i < value.length(); i++) {
            int a = fun[i];
            a = a - key;
            fun[i] = (char) a;
        }
        value = String.valueOf(fun);
        return value;
    }

    // Main function

    public static void main(String[] args) throws IOException {
        String value = "";
        int key = 0;
        String mode = "enc";
        String pathToFile = "";
        String pathToOutputFile = "";
        // To Find the -in
        // To Find the Data
        for (int i = 0; i < args.length; i++) {
            if (args[i].equals("-data")) {
                if (i < args.length - 1) {
                    value = args[i + 1];
                    break;
                }
            }
        }

        if (value.isEmpty()) {
            // To-Find Input File
            for (int i = 0; i < args.length; i++) {
                if (args[i].equals("-in")) {
                    pathToFile = args[i + 1];
                }
            }
            try {
                value = readFileAsSingleString(pathToFile);
            } catch (IOException e) {
                System.out.println("Error there is No Such File Or Unable to Read");
            }
        }

        // To Find the Key
        for (int i = 0; i < args.length; i++) {
            if (args[i].equals("-key")) {
                if (i < args.length - 1) {
                    key = Integer.parseInt(args[i + 1]);
                }
            }
        }

        // To Find the Mode
        for (int i = 0; i < args.length; i++) {
            if (args[i].equals("-mode")) {
                if (i < args.length - 1) {
                    if (args[i + 1].equals("enc")) {
                        mode = args[i + 1];
                    } else if (args[i + 1].equals("dec")) {
                        mode = args[i + 1];
                    }
                }
            }
        }

        // EncryptionAndDecryption

        if (mode.equals("enc")) {
            value = encrypted(value, key);
        } else {
            value = decrypted(value, key);
        }

        // To Find the Output Method

        for (int i = 0; i < args.length; i++) {
            if (args[i].equals("-out")) {
                pathToOutputFile = args[i + 1];
                break;
            }
        }
        if (pathToOutputFile.isEmpty()) {
            System.out.println(value);
        } else {
            File file = new File(pathToOutputFile);
            FileWriter writer = new FileWriter(file);
            writer.write(value);
            writer.close();
        }
    }
}
