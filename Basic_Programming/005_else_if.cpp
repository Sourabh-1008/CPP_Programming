#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cout<<"Enter the X and Y values:-";
    cin>>x>>y;

    if(x == y){
        cout<<"Both Values are Same";
    }
    else if(x > y){
        cout<<"X value is greater the Y";
    }
    else
    {
        cout<<"Y is Grater the X";
    }
    return 0;
}