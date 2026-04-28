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

@Override
public String toString() {
	return "FRN: " +this.frn+"\nStudent name: "+this.studentName+
	"\ndistance covered: "+this.distanceCovered+"km"+"\ncompany Name: "+this.companyName+"\nDesignation: "+this.designation;
}

}


//main function
public class Question_03
{
public static void main(String[] args)

{
	PlacedStudent p1=new PlacedStudent(); 
	System.out.println(p1.toString());
}
}


  
	

	
		  

		
		
		
		
		
		
	