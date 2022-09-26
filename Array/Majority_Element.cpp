// Majority Element
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int count = 0;
    int maxCount = 0;
    int index = -1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[j] == arr[i])
            {
                count+=1;
            }
        }
        if (count > maxCount)
        {
            maxCount = count;
            index = i;
        }
    }
    if (maxCount > n / 2)
    {
        cout << arr[index];
    }
    else
    {
        cout << "Not Majority Element";
    }
    return 0;
}