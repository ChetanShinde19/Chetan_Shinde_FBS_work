#include<stdio.h>
void eligible();
int main()
{
    eligible();
    return 0;
}
void eligible(){
        int age=19;
    if (age>=18)
    {
        printf("person is eligible",age);
        /* code */
    }
    else{
        printf("person is not eligible",age);
    }
    
}