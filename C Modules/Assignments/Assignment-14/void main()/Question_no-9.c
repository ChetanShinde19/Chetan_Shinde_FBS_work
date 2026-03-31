#include<stdio.h>
struct complex {
    int real;
    int imaginary;
    
};

void main(){

    struct complex c;
    printf("Entre the (real imaginary)");
    scanf("%d %d",&c.real,&c.imaginary);


    printf("complex number: %d + %di",c.real,c.imaginary);
}
