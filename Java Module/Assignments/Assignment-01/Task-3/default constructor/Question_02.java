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

@Override
public String toString() {
	return "FRN: " +this.frn+"\nStudent name: "+this.studentName+
	"\ndistance covered: "+this.distanceCovered+"km";
}
}


//main function
public class Question_02
{
public static void main(String[] args)

{
	Student s1=new Student();
	System.out.println(s1.toString());
}
}
