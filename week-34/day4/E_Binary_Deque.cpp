#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, s;
        cin >> n >> s;
        long long total_sum = 0;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            total_sum += a[i];
        }

        if (total_sum < s)
        {
            cout << -1 << endl;
        }
        else
        {
            if (total_sum == s)
            {
                cout << 0 << '\n';
            }
            else
            {
                int l = 0, r = 0, ans = 0,sum=0;
                while (r < n)
                {
                    sum += a[r];

                    if (sum > s)
                    {
                        sum -= a[l];
                        l++;
                    }

                    if (sum == s)
                    {
                        int len = r - l + 1;
                        ans=max(ans,len);
                    }
                    r++;
                }
                cout << n-ans << "\n";
            }
        }
    }
    return 0;
}