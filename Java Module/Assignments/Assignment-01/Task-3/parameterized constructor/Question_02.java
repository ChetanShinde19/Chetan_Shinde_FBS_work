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
	Student s1=new Student(101,"chetan shinde",10); 
	System.out.println(s1);
}
}
