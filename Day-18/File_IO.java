
import java.util.*;
import java.io.*;

public class File_IO {
    public static void main(final String[] args) {
        final File file = new File("D:\\Java\\src\\com\\dataset_91069.txt");
        final String[] name = new String[67];
        int i = 0;
        try {
            final Scanner scanner = new Scanner(file);
            while (scanner.hasNextLine()) {
                name[i++] = scanner.nextLine();

            }
            scanner.close();
        } catch (final FileNotFoundException e) {
            System.out.println("Looser");
        }
        int maxYear = 0;
        int maxDiffPop = 0;
        i = 0;
        final int[] years = new int[67];
        final long[] population = new long[67];
        for (int j = 0; j < 67; j++) {
            final String[] law = name[j].split("\t");
            years[j] = Integer.parseInt(law[0]);
            final String poppy = law[1].replace(",", "");
            population[j] = Long.parseLong(poppy);
        }
        for (int k = 1; k < 67; k++) {
            final long l = population[k] - population[k - 1];
            if (l > (long) maxDiffPop) {
                maxYear = years[k];
                maxDiffPop = (int) l;
            }
        }
        System.out.println(maxYear + " " + maxDiffPop);
    }
}
