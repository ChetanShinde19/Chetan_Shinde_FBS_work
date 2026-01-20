// 7. Electricity Bill Calculation
// Input units consumed:
// If units ≤ 100 → ₹1/unit
// Else if units ≤ 200
// First 100 units → ₹1/unit
// Remaining → ₹2/unit
// Else
// First 100 → ₹1/unit
// Next 100 → ₹2/unit
// Remaining → ₹3/unit
// Use nested if–else, not switch.
#include<stdio.h>
int main()
{
    int bills,units;
    printf("Enter the Units consumed:");
    scanf(" %d", &units);
    if (units<=100)
    {
        bills=units*1;
        /* code */
    }
    else if (units<=200)
    {
        bills=100*1+(units-100)*2;
    }
    else
    {
        bills=100*1+100*2+(units-200)*3;
        /* code */
    }
    printf("total Electricity bill rs:%d\n",bills);
    return 0;
    
}