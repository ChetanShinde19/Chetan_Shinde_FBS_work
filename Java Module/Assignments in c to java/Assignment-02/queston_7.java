public class queston_7 {
public static void main(String[] args) {
        int age=12;
    // printf("enter the age:");
    // scanf(" %d",&age);
    
    if (age<12)
    {
        System.out.printf("child");
        /* code */
    }
    else{
        if (age>=12 && age<=19)
        {
        System.out.printf("Teenager");
        /* code */
        }
        else{
            if (age >= 20 && age <= 59)
            {
            System.out.printf("Adult");
            }
            else
            {
                if (age>=60)
                {
                System.out.printf("Senior");
                }
                
            }
            
        }
      
    }
}
    
}