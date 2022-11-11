#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        int s;
        cin >> s;
        m[s]++;
    }
    for (auto pr : m)
    {
        if (pr.second == 1)
        {
            cout<<pr.first <<" "<<pr.second<<endl;
        }
    }

    return 0;
}