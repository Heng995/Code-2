//https://www.youtube.com/watch?v=_3RL5mdBD-Y&t=276s
//繼承 同名變數 方法覆載
class A{
        int a = 100;
        int b = 20;
        void printData(){
            System.out.println("a="+a+"b="+b );
        }
    }

class B extends A{}
public class tc0222_1 {
    public static void main(String[]args){
        A objA=new A();
        B objB=new B();

        objA.printData();
        objB.printData();

        System.out.println("a="+objB.a);
        System.out.println("b="+objB.b);
    }
}
