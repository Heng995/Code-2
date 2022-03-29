public class tc0315_2 {
    public static void main(String[]args){
        B objB = new B();
        objB.printA();
        objB.setA(500);
        objB.printA();
    }
}
abstract class A{
    private int a=10;
    int getA(){return a;}
    void setA(int a){this.a=a;}
    abstract void printA();
}
class B extends A{
    void printA(){
        System.out.println("a="+getA());
    }
}