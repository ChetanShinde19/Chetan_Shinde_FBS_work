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

	void display() {
		System.out.println("----Data ----");
		System.out.println("Date:" + day + "-" + month + "-" + year);
		System.out.println("DOW: " + dow);
	}

}

public class Question_01 {
	public static void main(String[] args)

	{
		
		Date d1; // reference
		d1 = new Date(01,04,2026,"thursday"); // object creation

		d1.display();
	}
}
