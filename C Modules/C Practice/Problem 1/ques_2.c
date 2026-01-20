// 2. Check Pass or Fail with Distinction

// Input marks of a student:

// If marks ≥ 40 → Pass

// If marks ≥ 75 → Distinction

// Else → Fail

#include<stdio.h>
int main()
{
    int sub1,sub2,sub3,sub4,sub5;
    int total;
    float marks;

    printf("enter the marks of subject:\n");
    scanf(" %d %d %d %d %d",&sub1, &sub2, &sub3, &sub4,&sub5);
    total=sub1+sub2+sub3+sub4+sub5;
    marks=(total/500.0)*100;
    printf("result: %.2f\n",marks);
    if (marks>=40)
    {
        printf("pass\n",&marks);
        /* code */
    }
    else{
        if (marks>=75)
        {
            printf("Distinction\n",&marks);
            /* code */
        }
        else{
            printf("Fail",&marks);
        }
        
    }
    return 0;
    
}