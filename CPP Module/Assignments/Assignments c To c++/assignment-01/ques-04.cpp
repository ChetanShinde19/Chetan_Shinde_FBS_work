#include<iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Enter the character: ";
    cin >> ch;

    if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    {
        cout<<ch <<" it is a vowel";
    }

    else{
        cout<<ch<<" it is consonant";
    }
    
    return 0;

}