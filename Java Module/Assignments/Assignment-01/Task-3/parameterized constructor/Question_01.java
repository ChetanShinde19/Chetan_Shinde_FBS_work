class Date {
	int day;
	int month;
	int year;
	String dow;

	Date(int day,int month,int year,String dow){
		this.day= day;
		this.month= month;
		this.year= year;
		this.dow= dow;
	
	}

@Override
public String toString() {

	return "Date: "+day+ "/"+this.month+"/"+this.year+"\ndow:"+this.dow;
}
}

public class Question_01 {
	public static void main(String[] args)

	{
		
		Date d1,d2; // reference
		d1 = new Date(01,04,2026,"thursday"); 
		d2 = new Date(01,04,202,"thursday");// object creation
System.out.println(d1);
System.out.println(d2);

		
	}
}
