//Program to find sum of natural numbers till n.
#include <iostream>
using namespace std;
int main()
{
    int sum = 0, n;
    cout<<"Enter the Number:-";
    cin>>n;
    for (int i = 0; i <= n; i++)
    {
        sum = sum + i;
    }
    cout << "Total:-" << sum;
    return 0;
}