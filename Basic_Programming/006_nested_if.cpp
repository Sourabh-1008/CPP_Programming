#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cout<<"Enter the X and Y values:-";
    cin>>x>>y;
    if(x == y){
        cout<<"Both the values are equal";
    }
    else{
        if (x > y)
        {
            cout<<"X is greater then Y";
        }
        else{
            cout<<"Y is greater the X";
        }
        
    }
    return 0;
}