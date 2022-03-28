//1.有一個 Student 類別，屬性包含姓名、學號、手機，還有一個覆載的toString方法，可以印出學生基本資料。
//2.請繼承Student建立”大學部學生”、”研究所學生” 兩個子類別，大學部學生有4科成績，研究所學生有2科成績、
//論文題目及指導老師，請分別寫一個方法判斷學生不及格科目(大學部60分級格、研究所70分級格)數量，另外寫一個方法計算學生個人平均成績。
//3.請寫一個主類別，主程式中宣告一個陣列，其中含有2位大學生及2位研究生，基本資料直接寫在陣列中即可。
//寫一個類別方法 printStudent(Student[] student)，此類別方法可以印出學生基本資料(研究生含論文題目、指導老師)、平均成績及不及格科目數。
public class hw1{
    public static void main(String[]args){
        Student objStudent=new Student();
        Undergraduate objUndergraduate=new Undergraduate();
        objStudent.name = "AAA";
        objStudent.id = "001";
        objStudent.phone = "09001";
        System.out.println(objStudent);
        objUndergraduate.score1= 50;
        objUndergraduate.score2= 70;
        objUndergraduate.score3= 50;
        objUndergraduate.score4= 30;
        System.out.println(objUndergraduate);


        objStudent.name = "BBB";
        objStudent.id = "002";
        objStudent.phone = "09002";
        System.out.println(objStudent);
    }
}

class Student{
    String name, id, phone;
    public String toString(){
        return "Name:"+name+"  Student ID:"+id+"  Phone namber:"+phone;
    }
}

class Undergraduate extends Student{
        int score1, score2, score3, score4,fail,ave;

}  
       


class Graduate extends Student{
    int score5, score6;
}