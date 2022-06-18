//這個單向鏈結串列由一般類別Number物件組成，
//Number類別包含一個整數及下一個Number物件，
//主類別可以輸入10個1~100整數，
//請利用Exception處理不在此範圍的數字以及非整數、
//非數字處理，讓你的程式不會當掉，然後將此10個數字放入單向鏈結串列中，
//由大到小排序，並在主類別寫一個方法可以列印出此單向鏈結串列內容。
import java.util.Arrays;
import java.util.Scanner;

public class hw0619{
    public static void main(String[] args){
        try{
            int temp;
            int[] a = new int[10];
            Scanner input = new Scanner(System.in);
            System.out.println("Please enter 10 numbers from 0 to 100: ");
            
            for(int i=0;i<a.length;i++){ 
                a[i] = input.nextInt();

                if(a[i]>101&&a[i]<0)
                {
                    continue;
                }    
            }

            for(int i=0;i<10;i++)
            {
                for(int j=i+1;j<10;j++)
                {
                    if(a[i] < a[j])
                    {
                        temp = a[i];
                        a[i] = a[j];
                        a[j] = temp;
                    }
                }
            }       
            
            System.out.println("Numbers sorted from largest to smallest:");
            System.out.println(Arrays.toString(a));
        }
        catch(Exception e)
        {
            System.out.println("Error!!!");
        }
    }
    
}