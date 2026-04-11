#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<< "Enter the number: ";
    cin >>num;

    if (num%2==0)
    {
        cout << "it is even number : " <<num;
    }

    else{
        
        cout << "it is odd number : " <<num;
    }
    return 0;
}
