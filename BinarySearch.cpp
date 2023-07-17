#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> a = {1, 3, 5, 7, 8, 12, 45, 67, 89};
    int n = a.size();
    int l = 0, r = n;
    int x, m;
    cin >> x;

    while (l <= r)
    {
        if ((l == r) && (a[l] != x))
        {
            cout << -1 << endl;
            break;
        }
        m = (l+r)/2;
        int y = a[m];

        if (y<x)
        {
            l = m+1;
        }
        else if (y>x)
        {
            r = m;
        }
        else
        {
            cout << m << endl;
            break;
        }
    }

    cout << endl;
    return 0;
}
