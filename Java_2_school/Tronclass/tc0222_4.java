package Tronclass;

class B extends A{
    static int c=50;
}
class A{
    int a,b;
    static int c=-1;
    static void printC(){
        System.out.println(c);
    }
}
public class tc0222_4 {
    public static void main(String[]args){
        B.c=100;
        A.printC();
        B.printC();
        System.out.println("A.c="+A.c+"B.c="+B.c);
    }
}
