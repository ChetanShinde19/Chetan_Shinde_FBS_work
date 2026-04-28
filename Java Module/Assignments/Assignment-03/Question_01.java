class Electricity_bill_calculator {
    static double rate_per_unit = 4.5;
    String customer_Name;
    int unit_consumed;

    Electricity_bill_calculator(String customer_Name, int unit_consumed) {
        this.customer_Name = customer_Name;
        this.unit_consumed = unit_consumed;
    }

    public static void updated_Rate(double newrate){
        rate_per_unit=newrate;
        System.out.println("updated Electricity bill rate: "+rate_per_unit);
    }

    double calculate_bill() {
        return unit_consumed * rate_per_unit;
    }

    void display_bill() {
        
        System.out.println("\n-----Electricity Bill-----");
        System.out.println("Customer Name: " + this.customer_Name);
        System.out.println("Units Consumed: " + this.unit_consumed);
        System.out.println("Rate per units: " + rate_per_unit);
        System.out.println("Total Bill: " + this.calculate_bill());
    }
}

public class Question_01 {
    public static void main(String[] args) {
        Electricity_bill_calculator cust1 = new Electricity_bill_calculator("Chetan shinde", 50);
        Electricity_bill_calculator cust2 = new Electricity_bill_calculator("Vaibhav shinde", 80);

        System.out.println("\n##### Initial bill #####");
        cust1.display_bill();
        cust2.display_bill();

        Electricity_bill_calculator.updated_Rate(8.55);

        System.out.println("\n##### Updated bill #####");
        cust1.display_bill();
        cust2.display_bill();
    }
}
