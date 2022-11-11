#include<bits/stdc++.h>
using namespace std;
int findDuplication(int arr[],int size){
    int ans = 0;
    for(int i=0;i<size;i++){
        ans = ans ^ arr[i];
    }
    for(int i=1;i<size;i++){
        ans = ans ^ i;
    }
    return ans;
}
int main(){
    int num;
    cin>>num;
    int arr[num];
    for(int i=0;i<num;i++){
        cin>>arr[i];
    }
    cout<<findDuplication(arr,num);
    return 0;
}