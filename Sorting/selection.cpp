#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void selection(int arr[], int size){
    for (int i = 0; i < size - 1; i++){
        for (int j = i + 1; j < size; j++){
            if (arr[j] < arr[i]){
                // int temp = arr[j];
                // arr[j] = arr[i];
                // arr[i] = temp;
                swap(arr[j],arr[i]);
            }
        }
    }
}
void printArray(int arr[],int size){
    for (int i = 0; i < size; i++){
        cout << arr[i];
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    selection(arr,n);
    printArray(arr,n);
}