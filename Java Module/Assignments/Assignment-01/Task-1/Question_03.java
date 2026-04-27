class PlacedStudent
{
int frn;
String studentName;
double distanceCovered;
String companyName;
String designation;

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

public void setcomapanyName(String company_n)
{
this.companyName=company_n;
}

public void setDesignation(String desig)
{
this.designation = desig;
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

public String getcompanyName(){
return companyName;
}

public String getDesignation(){
return designation;
}

void display()
{
System.out.println("Student info:");
System.out.println("FRN: "+ frn);
System.out.println("Student name: "+ studentName);
System.out.println("distance Covered: "+ distanceCovered);
System.out.println("comapany Name: "+ companyName);
System.out.println("Designation: "+ designation);

}

}


//main function
public class Question_03
{
public static void main(String[] args)

{
	PlacedStudent p1=new PlacedStudent(); 

	p1.setfrn(10); 
	p1.setstudent_Name("chetan shinde");
	p1.setdistance_Covered(8.9);
	p1.setcomapanyName("Google");
	p1.setDesignation("Senior Developer");
	p1.display();
}
}
