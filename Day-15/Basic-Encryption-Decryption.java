import java.util.*;

class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String name = scanner.nextLine();
        int key = scanner.nextInt();
        char[] fun = name.toCharArray();
        for (int i = 0; i < name.length(); i++) {
            if (fun[i] != ' ') {
                int a = fun[i];
                if (a + key > 122) {
                    int b = a + key - 123;
                    a = 97 + b;
                } else {
                    a = a + key;
                }
                fun[i] = (char) a;
            }
        }
        name = String.valueOf(fun);
        System.out.println(name);
        scanner.close();
    }
}