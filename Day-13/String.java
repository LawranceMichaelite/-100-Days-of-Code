
/* All the String methods as follows */

public class String {
    public static void main(String[] args) {
        /* string_name.isEmpty() will return true if the variable is empty or Null */
        String name_1 = "";
        System.out.println(name_1.isEmpty());
        name_1 = " ";
        System.out.println(name_1.isEmpty());

        /* string_name.toUpperCase() will convert the string into Uppercase letters */
        String name_2 = "lawrance";
        System.out.println(name_2.toUpperCase());
        name_2 = name_2.toUpperCase();

        /* string_name.toLowerCase() will convert the string into Lowercase letters */
        System.out.println(name_2.toLowerCase());

        System.out.println(name_2.startsWith("L")); // Prints true
        System.out.println(name_2.startsWith("D")); // Prints false

        System.out.println(name_2.contains("AW")); // Prints true

        System.out.println(name_2.substring(0, 3)); // Returns the sub-string in given Index

        System.out.println(name_2.replace("RA", "RE")); // Replaces the Given String according to the Target String

        name_1 = name_2.toLowerCase();

        System.out.println(name_1.equals(name_2)); // Prints false because of the Different Cases

        System.out.println(name_1.equalsIgnoreCase(name_2)); // Prints true as it Ignores the Cases

    }
}