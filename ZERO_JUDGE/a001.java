import java.util.Scanner;
public class a001{
    public static void main(String[]args){
        try (Scanner s = new Scanner(System.in)) {
            String str = s.next();
            System.out.println("hello, " + str);
        }
    }
}