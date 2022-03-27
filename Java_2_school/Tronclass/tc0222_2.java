package Tronclass;
//https://www.youtube.com/watch?v=_3RL5mdBD-Y&t=276s
//繼承 同名變數 方法覆載
class A{
    int a = 100;
    int b = 20;
    void printData(){
        System.out.println("a="+a+"b="+b);
    }
}

class B extends A{}

class C extends B{
    int a = -100;
    int c = 50;
    void printC(){
        System.out.println("c="+c);
    }
    void printData(){
        System.out.println("a="+a+"b="+b+"c="+c);
    }
}

public class tc0222_2 {
public static void main(String[]args){
    A objA=new A();
    B objB=new B();
    C objC=new C();
    System.out.println(objA instanceof A);
    System.out.println(objB instanceof A);
    System.out.println(objC instanceof A);
    System.out.println(objC instanceof B);
    objC.printData();
    objC.printC();
    }
}