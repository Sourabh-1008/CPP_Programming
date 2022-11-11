#include <bits/stdc++.h>
using namespace std;
int findUnique(int arr[], int size)
{
   	int ans = 0;
    for(int i = 0; i<size; i++) {
        ans ^= arr[i];
    }
    return ans;
}
int main()
{
    int num;
    cin >> num;
    int arr[num];
    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }
    cout << findUnique(arr, num);
    return 0;
}