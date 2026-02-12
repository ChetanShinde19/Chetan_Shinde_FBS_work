#include<stdio.h>
float stud_discount()
{
    float price,discount=0,final_discount;
    float *ptr1=&price;

    char student;
    char *ptr2=&student;

    printf("are you student? (y/n):");
    scanf(" %c",ptr2);
    printf("enter the price:");
    scanf("%f",ptr1);
    if (*ptr2=='y'||*ptr2=='Y')
    {
        if (*ptr1>500)
        {
            discount=*ptr1*0.20;
        }
        else
        {
            discount=*ptr1*0.10;
        }
    }
    else if  (*ptr2 == 'n' || *ptr2 == 'N'){
         if (*ptr1>600)
        {
            discount=*ptr1*0.15;
        }
        else{
            discount=*ptr1*0.00;
        }
    }
    final_discount=*ptr1-discount;
    return final_discount;


}
int main()
{
   float result=stud_discount();
    printf("Total amount :%.2f",result);
    return 0;  
}