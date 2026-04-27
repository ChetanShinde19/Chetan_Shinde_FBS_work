class PlacedStudent
{
	int frn;
	String studentName;
	double distanceCovered;
 String companyName;
 String designation;

PlacedStudent(int frn,String studentName,double distanceCovered,String companyName,String designation){
	this.frn=frn;
	this.studentName=studentName;
	this.distanceCovered= distanceCovered;
	this.companyName=companyName;
	this.designation=designation;
}

void display()
{
System.out.println("Student info:");
System.out.println("FRN: "+ frn);
System.out.println("Student name: "+ studentName);
System.out.println("distance Covered: "+ distanceCovered+"km");
System.out.println("company Name: "+ companyName);
System.out.println("designation: "+ designation);

}

}


//main function
public class Question_03
{
public static void main(String[] args)

{
	PlacedStudent p1=new PlacedStudent(101,"chetan shinde",20,"google","CEO"); 
	p1.display();
}
}


  
	

	
		  

		
		
		
		
		
		
	