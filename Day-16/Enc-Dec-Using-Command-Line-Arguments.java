
//To Run the below Program
/*
   1. Compile the Program   --> javac <File-Name>.java
   2. Run the Program --> java <File-Name> -mode <enc> or <dec> -key <any-number> -data <message>
*/

public class Main {

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

    public static void main(String[] args) {
        String value = "";
        int key = 0;
        String mode = "enc";

        // To Find the Data
        for (int i = 0; i < args.length; i++) {
            if (args[i].equals("-data")) {
                if (i < args.length - 1) {
                    value = args[i + 1];
                    break;
                }
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

        System.out.println(value);
    }
}
