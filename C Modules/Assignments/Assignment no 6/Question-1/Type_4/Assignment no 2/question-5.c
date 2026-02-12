#include<stdio.h>
float student_discount(float price,char student)
{
    float discount=0;
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
    return price-discount;
}
int main()
{
    float price;
    char student;
    printf("are you student? (y/n):");
    scanf(" %c",&student);
    printf("enter the price:");
    scanf("%f",&price);
    float result = student_discount(price,student);
    
    printf("Discounted amount :%.2f\n",price-result);
    printf("Total amount:%.2f \n",result);
    return 0;  
}