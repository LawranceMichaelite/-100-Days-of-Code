import java.util.Scanner;

public class Exception_handling {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        while (scanner.hasNextLine()) {
            String value = scanner.nextLine();
            if (value.equals("0")) {
                break;
            } else {
                try {
                    int num = Integer.parseInt(value);
                    System.out.println(num * 10);
                } catch (NumberFormatException e) {
                    System.out.println("Invalid user input: " + value);
                }
            }
        }
        scanner.close();
    }
}