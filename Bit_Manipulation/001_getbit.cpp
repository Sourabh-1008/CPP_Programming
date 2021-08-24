#include<iostream>
using namespace std;

int getBit(int n, int position)
{
    return ( n & ( 1 << position ) != 0 ); //Get Bit; 
}

int setBit(int n,int position){
    return (n | ( 1 << position));
}

int clearBit(int n,int position)
{
    int mask = ~(1<<position);
    return  (n & mask);
}

int updateBit(int n,int position,int value)
{
    int mask = ~(1<<position);
    n =  n & mask;
    return (n |(value << position));
}
int main()
{
    cout<<"Get Bit :"<<getBit(5,2)<<endl;
    cout<<"Set Bit :"<<setBit(5,1)<<endl;
    cout<<"Clear Bit :"<<clearBit(5,2)<<endl;
    cout<<"Update  Bit :"<<updateBit(5,1,1)<<endl;
    return 0;
}