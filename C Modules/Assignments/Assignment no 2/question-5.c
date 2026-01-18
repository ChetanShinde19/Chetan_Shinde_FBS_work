#include<stdio.h>
int main()
{
    float price,discount=0;
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
    
    printf("Discounted amount:%.2f \n",discount);
    printf("Total amount :%.2f",price-discount);
    return 0;  
}