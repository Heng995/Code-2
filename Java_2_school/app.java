import java.util.Random;

public class app {
    public static void main(String[] args) {
        Random r = new Random();
        int x, i, j, week, count;
        int people[] = new int[13000000];
        int ticket[] = { 300000, 25000, 220000, 750000, 500000, 100000, 50000 };
        for (i = 0; i < people.length; i++) {
            people[i] = r.nextInt(999);
        }
        for (week = 0; week < 4; week++) {
            System.out.println("第" + (week + 1) + "週\n");
            for (i = 0; i < ticket.length; i++) {
                System.out.printf("券" + ticket[i]);
                count = 0;
                while (count <= ticket[i]) {
                    x = r.nextInt(99);
                    for (j = 0; j < people.length && count <= ticket[i]; j++) {
                        if (people[j] % 10 + people[j] / 10 % 10 * 10 == x) {
                            count++;
                        }
                    }
                    System.out.printf("%s", String.format(" %02d", x));
                }
                System.out.println();
            }
        }
    }
}