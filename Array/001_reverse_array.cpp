#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"\n";
    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<endl;
    }
    cout<<"\n";
    for(int i = n-1; i>=0;i--)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}