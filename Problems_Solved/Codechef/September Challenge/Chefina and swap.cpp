using namespace std;
typedef long long ll;
void solve()
{
    ll n;
    cin >> n;
    ll right = n * (n + 1) / 4, cnt = 0, left = 0;
    for (ll i = 1; i <= n; i++)
    {
        left += i;
        ll diff = right - left;
        for (int j = 1; diff && j <= n; j++)
        {
            if (j + diff > i && j + diff <= n)
            {
                cnt++;
            }
        }
    }
    cout << cnt << endl;
}
int main()
{
    IOS int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}