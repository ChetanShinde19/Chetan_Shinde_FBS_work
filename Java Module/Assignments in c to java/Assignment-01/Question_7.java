public class Question_7 {

    public static void main(String[] args) {
            float basic=90000,da,ta,hra,total_salary;
    // printf("Enter the basic salary:\n");
    // scanf("%f",&basic);
    if (basic<=5000)
    {
        da=basic*0.10f;
        ta=basic*0.20f;
        hra=basic*0.25f;
        /* code */
    }
    else{
        da=basic*0.15f;
        ta=basic*0.25f;
        hra=basic*0.30f;
    }

    total_salary=basic+da+ta+hra;
    System.out.printf("basic:%.2f\n",basic);
    System.out.printf("da:%.2f\n",da);
    System.out.printf("ta:%.2f\n",ta);
    System.out.printf("hra:%.2f\n",hra);
    System.out.printf("Total salary on basic is %.2f",total_salary);
    }
}