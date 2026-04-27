class Student
{
private	int frn;
private	String studentName;
private	double distanceCovered;


Student(int frn,String studentName,double distanceCovered){
	this.frn=frn;
	this.studentName=studentName;
	this.distanceCovered=distanceCovered;
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
	Student s1=new Student(101,"chetan shinde",10); 
	s1.display();
}
}
