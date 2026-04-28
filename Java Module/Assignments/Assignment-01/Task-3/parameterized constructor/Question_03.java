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
	PlacedStudent p1=new PlacedStudent(101,"chetan shinde",20,"google","CEO"); 
	System.out.println(p1);
}
}


  
	

	
		  

		
		
		
		
		
		
	