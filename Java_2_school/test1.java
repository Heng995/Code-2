public class test1{
    public static void main(String[]args){
        printSum(10,20,30);
        printSum(1,3,4,510);
    }
    static void printSum(int...s){
    int sum=0;
    for(int i:s){
        sum+=i;
    }
    System.out.print("sum="+sum);
    }
}
