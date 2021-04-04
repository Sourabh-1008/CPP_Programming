//Program to find maximum, minimum among two numbers.
#include<iostream>
using namespace std;
int main(){
    int n1,n2;
    cout<<"Enter the First and Second Number:-";
    cin>>n1>>n2;
    int max,min;
    if(n1>n2){
        max = n1;
        min = n2;
    }
    else{
        max = n2;
        min = n1;
    }
    cout<<"Max:-"<<max<<endl;
    cout<<"Min:-"<<min;
    return 0;


}