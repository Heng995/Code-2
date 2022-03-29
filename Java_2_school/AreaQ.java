/*
   �����ǧ����U�C�u�@:

   1.�Ь� Area.java ����
   2.�бN main �� �� Rectangle obj1,Triangle obj2,Rectangle obj3 ���ŧi��Shape���O,
     ����new ������
   3.�бN obj1,obj2,obj3 �H����}�C�覡�ŧi
   4.�Ьd�� java documnets �� Object class �� getClass()method ,�b�L�X���n���e���C�L���O�W��

*/
//��H���O Shape
abstract class Shape {
   int width;
   int height;
   int calculateArea(){return width*height;};
   public String toString(){ return "W:"+width+" H:"+height ;}
   Shape(int width,int height){ 
               this.width=width;
               this.height=height;
   }
 }
class Triangle extends Shape{}

class Rectangle extends Shape{}

public class AreaQ {
   public static void main(String [] args){
      
      Rectangle obj1=new Rectangle();
      obj1.width = 10;
      obj1.height = 20;
      System.out.println("Area:"+obj1.calculateArea());
      Triangle obj2=new Triangle();
      obj2.width = 12;
      obj2.height = 5;
      System.out.println("Area:"+obj2.calculateArea());
      Rectangle obj3=new Rectangle();
      obj3.width = 5;
      obj3.height = 6;
      System.out.println("Area:"+obj3.calculateArea());      
   }
}
