import java.util.*;

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
        Scanner scanner = new Scanner(System.in);
        String cypher = scanner.nextLine();
        String name = scanner.nextLine();
        int key = scanner.nextInt();
        if (cypher.equals("enc")) {
            name = encrypted(name, key);
        } else {
            name = decrypted(name, key);
        }
        System.out.println(name);
    }

}
