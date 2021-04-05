#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"Enter the Number:-";
    cin>>n;
    while(n>=0)
    {
        sum +=n;
        cout<<"enumber:-";
        cin>>n;
    }
    cout<<"The Sum:-"<<sum;
    return 0;
}