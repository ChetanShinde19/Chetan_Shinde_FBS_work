#include <iostream>
using namespace std;

int main()
{
    float basic, da, ta, hra, total_salary;
    cout << "Enter the basic salary: ";
    cin >> basic;

    if (basic <= 5000)
    {
        da = basic * 0.10f;
        ta = basic * 0.20f;
        hra = basic * 0.25f;
    }

    else
    {
        da = basic * 0.15f;
        ta = basic * 0.25f;
        hra = basic * 0.30f;
    }

    total_salary = basic + da + ta + hra;
    cout << "basic: " << basic;
    cout << "\nda: " << da;
    cout << "\nta: " << ta;
    cout << "\nhra: " << hra;
    cout << "\nTotal salary: " << total_salary;

    return 0;
}