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

	void display() {
		System.out.println("----Date----");
		System.out.println("info: " + day + "-" + month + "-" + year);
		System.out.println("DOW: " + dow);
	}

}

public class Question_01 {
	public static void main(String[] args)

	{
		
		Date d1; // reference
		d1 = new Date(); // object creation

		d1.display();
	}
}
