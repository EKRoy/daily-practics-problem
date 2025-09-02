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
        long long sum = 0;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }

        int l = 0, r = 0, ans = 0;

        if (sum < s)
        {
            cout << -1 << endl;
        }
        else
        {
            if (sum == s)
            {
                cout << 0 << '\n';
            }
            else
            {
                while (r < n)
                {
                    sum += a[r];

                    while (sum > s)
                    {
                        sum -= a[l];
                        l++;
                    }

                    if (sum == s)
                    {
                        int len = r - l + 1;
                        if (len > ans)
                        {
                            ans = n - len;
                        }
                    }
                    r++;
                }
                cout << ans << "\n";
            }
        }
        return 0;
    }
}