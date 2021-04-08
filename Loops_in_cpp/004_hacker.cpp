//Program to check if a number is even or odd.
#include <iostream>
using namespace std;
int main()
{
    int x, y;
    string arr[9] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    cout << "Enter the number:-";
    cin >> x;
    cout << "Enter the number:-";
    cin >> y;
    for (int i = x; i < y; i++)
    {
        if(i>9)
        {
            cout<<arr[i - i];
        }
        else if (i % 2 == 0)
        {
            cout << "Even Number" << endl;
        }
        else
        {
            cout << "Odd Number" << endl;
        }
    }

    return 0;
}