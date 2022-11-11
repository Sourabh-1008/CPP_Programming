#include <bits/stdc++.h>
using namespace std;
void swapAlternet(int arr[], int size)
{
    for (int i = 0; i < size; i += 2)
    {
        if (i < size)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
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
    swapAlternet(arr, num);
    printArray(arr, num);
    return 0;
}