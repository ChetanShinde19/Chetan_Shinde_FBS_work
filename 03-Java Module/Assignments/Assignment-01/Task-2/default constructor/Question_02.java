class Student
{
private	int frn;
private	String studentName;
private	double distanceCovered;


Student(){
	this.frn=102;
	this.studentName="chetan shinde";
	this.distanceCovered=10;
}

void display()
{
System.out.println("Student info:");
System.out.println("FRN: "+ frn);
System.out.println("Student name: "+ studentName);
System.out.println("distance Covered : "+ distanceCovered+"km");
}

}


//main function
public class Question_02
{
public static void main(String[] args)

{
	Student s1=new Student(); 
	s1.display();
}
}
