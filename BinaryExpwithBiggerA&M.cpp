#include<bits/stdc++.h>
using namespace std;

int binExp(long long a, long long b, long long m)
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

long long binMulti(long long a, long long b, long long m)
{
    long long ans = 0;
    while (b)
    {
        if (b&1)
        {
            ans = (ans + a)%m;
        }
        a = (a+ a)%m;
        b >>= 1;
    }
    return ans;
}

int main()
{
    long long a, b, m;
    cin >> b >> m;
    a = binExp(18, 34, m);
    cout << a << endl;
    cout << binExp(a, b, m) << endl;
}
