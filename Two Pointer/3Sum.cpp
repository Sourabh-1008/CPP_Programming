#include "bits/stdc++.h"
using namespace std;
int main(){
    int n;
    cin>>n;
    int targte;
    cin>>targte;
    vector <int> a(n);
    for(auto &i:a){
        cin>>i;
    }
    bool found = false;
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++){
        int lo=i+1,hi=n-1;
        while (lo<hi){
            int current = a[i]+a[lo]+a[hi];
            if(current == targte){
                found = true;
            }
            if(current < targte){
                lo++;
            }else{
                hi--;
            }
        }
    }
    if(found){
        cout<<"True";
    }else{
        cout<<"False";
    }
    return 0;
}