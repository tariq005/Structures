#include<bits/stdc++.h>
using namespace std;

int binExp(int a, long long b, int m)
{
    int ans = 1;
    while (b)
    {
        if (b&1)
        {
            ans = (ans * a)%m;
        }
        a = (a* a)%m;
        b >>= 1;
    }
    return ans;
}

int main()
{
    int a, m;
    cin >> a >> m;
    cout << binExp(a, binExp(32, 30, m-1), m) << endl;
}
