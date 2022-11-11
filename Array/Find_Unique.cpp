#include<iostream>
using namespace std;
int main(){
    int a[] = {5,7,4,6};
    int b[] = {1,2,3,8};
    int size_a = sizeof(a)/sizeof(int);
    int size_b = sizeof(b)/sizeof(int);
    int sum = 0;
    for(int i=0;i<size_a;i++){
        for(int j=0;j<size_b;i++){
            int temp = a[i];
            a[i] = b[j];
            b[j] = temp;
            sum +=b[j]; 
        }
        cout<<sum;
    }
    return 0;
}