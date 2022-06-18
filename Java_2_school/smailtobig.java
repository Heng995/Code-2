import java.util.Arrays;
import java.util.Scanner;

public class smailtobig {
    public static void main(String args[]) throws Exception//程式從這裡開始
    {
        int a[]=new int[10];
        int temp;
        Scanner scanner = new Scanner(System.in);
        System.out.println("Please enter 10 numbers:");
        for( int i=0;i<10;i++)
        {
            a[i]= scanner.nextInt();
        }
        for(int i=0; i<10;i++)
        {
            for(int j=i+1;j<10;j++)
            {
                if(a[i]<a[j])
                {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }
        System.out.println(Arrays.toString(a));
        for(int i=0;i<10;i++);
    }

}
