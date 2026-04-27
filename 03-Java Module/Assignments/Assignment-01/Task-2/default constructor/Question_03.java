class PlacedStudent
{
	int frn;
	String studentName;
	double distanceCovered;
 String companyName;
 String designation;

PlacedStudent(){
	this.frn=101;
	this.studentName="chetan shinde";
	this.distanceCovered= 8.9;
	this.companyName="Microsoft";
	this.designation="Senoir Developer";
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
	PlacedStudent p1=new PlacedStudent(); 
	p1.display();
}
}


  
	

	
		  

		
		
		
		
		
		
	