class Student
{
private	int frn;
private	String studentName;
private	double distanceCovered;


//setter 
public void setfrn(int f) 
{
	this.frn=f;
}

public void setstudent_Name(String name)
{
this.studentName=name;
}


public void setdistance_Covered(double dc)
{
this.distanceCovered=dc;
}

//getter 
public int getfrn(){
return frn;
}

public String getstudentName(){
return studentName;
}

public double getdistanceCovered(){
return distanceCovered;
}


void display()
{
System.out.println("Student info:");
System.out.println("FRN: "+ frn);
System.out.println("Student name: "+ studentName);
System.out.println("distance Covered: "+ distanceCovered);
}

}


//main function
public class Question_02
{
public static void main(String[] args)

{
	Student s1=new Student(); 

	s1.setfrn(10); 
	s1.setstudent_Name("chetan shinde");
	s1.setdistance_Covered(8.9);
	s1.display();
}
}
