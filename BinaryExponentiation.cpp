#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, m;
    cin >> a >> b >> m;
    int ans = 1;

    while (b)
    {
        if (b&1)
        {
            ans = (ans*a)%m;
        }
        a = (a*a)%m;
        b >>= 1;
    }
    cout << ans << endl;
}
