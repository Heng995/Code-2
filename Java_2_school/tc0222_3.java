//https://www.youtube.com/watch?v=_3RL5mdBD-Y&t=276s
//繼承 同名變數 方法覆載

class B extends A{
    int a=11,b=22;
    int x=100;
    public String toString(){
        return "a="+a+"b="+b+"x="+x;
    }
}

class A{
    int a=1,b=5;
    A(){}
    public String toString(){
        return "a="+a+"b="+b;
    }
}

public class tc0222_3 {
public static void main(String[]args){
    A objA=new A();
    B objB=new B();
    System.out.println(objA);
    System.out.println(objB);
    }
}