import java.util.*;

class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String value = scanner.nextLine();

        String[] arr = value.split("\\?");

        String[] answer = arr[1].split("&");

        String password = answer[0].substring(5);

        String port = answer[1].substring(5);

        String cookie = answer[2].substring(7);

        String host = answer[3].substring(5);

        if (password.isEmpty()) {
            System.out.println("pass : not found");
        } else {
            System.out.println("pass : " + password);
        }

        if (port.isEmpty()) {
            System.out.println("port : not found");
        } else {
            System.out.println("port : " + port);
        }

        if (cookie.isEmpty()) {
            System.out.println("cookie : not found");
        } else {
            System.out.println("cookie : " + cookie);
        }

        if (host.isEmpty()) {
            System.out.println("host : not found");
        } else {
            System.out.println("host : " + host);
        }

        if (password.isEmpty()) {
            System.out.println("password : not found");
        } else {
            System.out.println("password : " + password);
        }
        scanner.close();
    }
}