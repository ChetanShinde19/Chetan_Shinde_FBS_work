class Date
{
	int day;
	int month;
	int year;
	String dow;
void setDay(int d) //definition of setDay
{
	this.day=d;
}

void setMonth(int m)
{
this.month=m;
}
void setYear(int yr)
{
this.year=yr;
}

void setdow(String date_of_week)
{
this.dow = date_of_week;
}


void display()
{
System.out.println("info: "+ day +"-"+ month +"-"+ year);
System.out.println("DOW: " + dow);
}

}

public class Question_01
{
public static void main(String[] args)

{
	Date d1; //reference
	d1=new Date(); //object creation

	d1.setDay(10); //call to setDay
	d1.setMonth(4);
	d1.setYear(2026);
d1.setdow("Monday");	
d1.display();
}
}
