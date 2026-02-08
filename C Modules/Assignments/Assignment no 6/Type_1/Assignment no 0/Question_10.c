#include<stdio.h>
void percentage();
int main()
{
   percentage();
    return 0;
}

void percentage(){
     int  sub1=90,sub2=98,sub3=89,sub4=85,sub5=80;
    int total_marks=sub1+sub2+sub3+sub4+sub5;
    float percentage=(float)total_marks/500*100;
    printf("Total marks is %d\n",total_marks);
    printf("Total Percentage of all subjects is %f",percentage);
}