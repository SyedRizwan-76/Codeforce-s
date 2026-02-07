#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES"
#define NO cout << "NO"
#define newline cout << endl

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m, k, pos, flag = 0, Count = 0;
        cin >> n >> m >> k;

        vector<ll> arn, arm;
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            arn.push_back(x);
        }
        for (ll i = 0; i < m; i++)
        {
            ll x;
            cin >> x;
            arm.push_back(x);
        }
        sort(arn.begin(), arn.end());
        sort(arm.begin(), arm.end());

        if (n >= m)
        {
            //cout << 1 << endl;
            for (ll i = 0; i < m; i++)
            {
                for (ll j = 0; j < n; j++)
                {
                    ll sum = arm[i]+arn[j];
                    //cout << arm[i] << arn[j] << endl;
                    if (sum <= k)
                    {
                        Count++;
                    }
                    else
                    {
                        //cout << "break= " << arm[i] << arn[j] << endl;
                        break;
                    }
                }
            }
        }
        else
        {
            for (ll i = 0; i < n; i++)
            {
                for (ll j = 0; j < m; j++)
                {
                    ll sum = arn[i]+arm[j];
                    if (sum <= k)
                    {
                        Count++;
                    }
                    else
                    {
                        break;
                    }
                }
            }
        }

        cout << Count << endl;
    }

    return 0;
}