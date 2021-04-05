#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the Number:-";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int sum = 0;
    int a, b;
    cout << "Take first number of array:-";
    cin >> a;
    cout << "Take second number of array:-";
    cin >> b;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        int doublesum = sum * 2;
        int multiplies = a * b;
        if (multiplies > doublesum)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
   

    return 0;
}