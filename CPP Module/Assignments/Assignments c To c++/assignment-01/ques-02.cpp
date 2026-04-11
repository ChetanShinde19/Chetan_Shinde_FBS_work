#include<iostream>
using namespace std;

int main()
{
    int num,first,last;
    cout<< "enter the number: ";
    cin >> num;
    first =num/100;
    last=num%10;

    if (num>=100 && num <=999 && first==last)
    {
        cout << num << " it is a palindrome number";
    }

    else{
        cout << num << " it is not a palindrome number";
    }
    return 0;
}