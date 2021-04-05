#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0, total = 0;
    cout << "Enter the Number :-";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int sum = arr[i] - arr[j];
            total = sum + arr[j];
        }
    }
    cout << "Total:-" << total;
    return 0;
}