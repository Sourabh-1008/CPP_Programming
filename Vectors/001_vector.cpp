#include <iostream>
#include <vector>
using namespace std;
int display(vector<int> &ves)
{
    for (int i = 0; i < ves.size(); i++)
    {
        cout << ves[i] << endl;
    }
}
int main()
{
    int size, elements;
    cin >> size;
    vector<int> vec;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the elemente in vector:-";
        cin >> elements;
        vec.push_back(elements);
    }
    vec.pop_back();
    display(vec);
    vector<int>::iterator iter = vec.begin();
    vec.insert(iter,5660);
    display(vec);
    return 0;
}