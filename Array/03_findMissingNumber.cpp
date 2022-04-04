//   How do you find the missing number in a given integer array of 1 to 100?

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int total = (n + 1)*(n + 2)/2;
     for (int j = 0; j < n; j++){
         total -= arr[j];
    }
    cout<<total;
    return 0;
}