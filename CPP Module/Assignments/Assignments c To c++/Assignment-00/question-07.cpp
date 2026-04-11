#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int total_min = 120;
    int hrs = total_min / 60;
    int remain_min = total_min % 60;
    cout << total_min << " minutes, "
         << hrs << " hours& "
         << remain_min << " remaining minutes";
    return 0;
}