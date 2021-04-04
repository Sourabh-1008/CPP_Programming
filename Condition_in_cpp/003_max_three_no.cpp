//Program to find the maximum among three numbers.
#include<iostream>
using namespace std;
int main()
{
    int x,y,z;
    cout<<"Enter the first No,Second No and Last No:-";
    cin>>x>>y>>z;
    if(x > y)
    {
        if(x > z){
            cout<<"X"<<endl;
        }else{
            cout<<"Z"<<endl;
        }
    }else{
        if(y > z){
            cout<<"Y"<<endl;
        }else{
            cout<<"Z"<<endl;
        }

    }
    return 0;   
    
}