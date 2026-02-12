#include<stdio.h>
float stud_discount()
{
    float price,discount=0,final_discount;
    char student;
    printf("are you student? (y/n):");
    scanf(" %c",&student);
    printf("enter the price:");
    scanf("%f",&price);
    if (student=='y'||student=='Y')
    {
        if (price>500)
        {
            discount=price*0.20;
            
            /* code */
        }
        else
        {
            discount=price*0.10;
            /* code */
        }
    }
    else if  (student == 'n' || student == 'N'){
         if (price>600)
        {
            discount=price*0.15;
                /* code */
        }
        else{
            discount=price*0.00;
        }
    }
    final_discount=price-discount;
    return final_discount;


}
int main()
{
   float result=stud_discount();
    printf("Total amount :%.2f",result);
    return 0;  
}