#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Enter the character: ";
    cin >> ch;

    if (ch >= 'A' && ch <= 'Z')
    {
        cout << ch << " it is a uppercase";
    }

    else
    {
        cout << ch << " it is lowercase";
    }

    return 0;
}