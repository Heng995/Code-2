public class test0301{
    public static void main(String[]args){
        A objA = new A();
        B objB = new B();
        objB.a = 50;
        System.out.println(objB.a + "" +objB.b);
        System.out.println(objA.sum()+ "" + objB.sum());
    }
}

class A{
    int a = 5;
    int b = 10;
    int sum(){ return a+b;}
}

class B extends A{
    int c = 100;
    int sum(){return a+b+c;}
}