#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Enter the age: ";
    cin >> age;

    if (age >= 18)
    {
        cout << " person is with age " << age << " eligible";
    }
    else
    {
        cout << " person with age " << age << " is not eligible";
    }

    return 0;
}