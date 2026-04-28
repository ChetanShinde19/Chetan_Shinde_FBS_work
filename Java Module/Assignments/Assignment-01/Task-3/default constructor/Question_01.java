class Date {
	int day;
	int month;
	int year;
	String dow;

	Date(){
		this.day= 19;
		this.month= 04;
		this.year= 2026;
		this.dow= "Saturday";

	}

@Override
public String toString() {

	return "Date: "+day+ "/"+this.month+"/"+this.year+"\ndow:"+this.dow;
}

}

public class Question_01 {
	public static void main(String[] args)

	{
		Date d1; // reference
		d1 = new Date(); // object creation

		System.out.println(d1.toString());
	}
}
