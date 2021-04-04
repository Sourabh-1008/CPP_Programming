//Program to check if a triangle is scalene, isosceles or equilateral.
#include<iostream>
using namespace std;
int main(){
    int sidea,sideb,sidec;
    cout<<"Input three side of triange:-";
    cin>>sidea>>sideb>>sidec;

    if(sidea == sideb && sideb == sidec)
    {
        cout<<"This is an equilaterat triangel";
    }
    else if(sidea == sideb || sidea == sidec || sideb == sidec)
    {
        cout<<"This is an isosceles triangle";
    }
    else
    {
        cout<<"This is a scalena triangle";
    }
    return 0;
}
