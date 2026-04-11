#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int  sub1=90,sub2=98,sub3=89,sub4=85,sub5=80;
    int total_marks=sub1+sub2+sub3+sub4+sub5;
    float percentage=(float)total_marks/500*100;
    cout << "Total marks is " << total_marks;
    cout << "\nTotal Percentage of all subjects is " << percentage;
    return 0;
}