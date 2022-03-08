#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
#include <iomanip>
#include <fstream>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<ll, ll> pll;
typedef pair<double, double> pdd;
typedef vector<ll> vll;
typedef vector<char> vchar;
typedef vector<string> vstr;
typedef vector<vector<ll>> vvll;
typedef vector<vector<pll>> vvpll;
typedef vector<pll> vpll;
ll MOD = 998244353;
double eps = 1e-12;
#define forn(i, e) for (ll i = 0; i < e; i++)
#define forsn(i, s, e) for (ll i = s; i < e; i++)
#define rforn(i, s) for (ll i = s; i >= 0; i--)
#define rforsn(i, s, e) for (ll i = s; i >= e; i--)
#define ln "\n"
#define dbg(x) cout << #x << " = " << x << ln
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define lb(x, n) lower_bound(x.begin(), x.end(), n)
#define ub(x, n) upper_bound(x.begin(), x.end(), n)
#define itrv vector<ll>::iterator
#define itrvv vector<vector<ll>>::iterator
#define itrpair vector<pairll>::iterator
#define mysort(x) sort(x.begin(), x.end())
#define INF 2e18
#define fast_cin()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
template <class T>
void print(T &c)
{
    for (typename T::iterator i = c.begin(); i != c.end(); i++)
    {
        std::cout << *i << ' ';
    }
    cout << endl;
}
vector<ll> ivec(ll n)
{
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    return v;
}
void fun()
{
    string a, s;
    cin >> a >> s;
    ll l=a.length();
    while (a.length() != s.length())
    {
        a = "0" + a;
        /* code */
    }
    // std::cout << a<<" "<<s << std::endl;
    string ans = "";
    ll i =a.length()-1  ;
    ll j = s.length() - 1;
    while (i >= 0)
    {
        if (a[i] <= s[j])
        {
            // std::cout << (to_string(s[j] - a[i])) << std::endl;
            ans = (to_string(s[j] - a[i])) + ans;
            j--;
            /* code */
        }
        else
        {
            ll x = (s[j] - '0') + (s[j - 1] - '0') * 10;
            if (x > 18)
            {
                std::cout << -1 << std::endl;
                /* code */
                return;
            }

            // std::cout << x << std::endl;
            j -= 2;
            // std::cout << a[i]-'0' << std::endl;
            // std::cout << (to_string(x - a[i] + '0')) << std::endl;
            ans = (to_string(x - a[i] + '0')) + ans;
            // string t=(to_string(x - a[i] + '0'));
            // std::cout << t << std::endl;
        }
        // std::cout << ans  << std::endl;
        // std::cout << j << std::endl;
        i--;
    }
    std::cout << i << " " << j << std::endl;
    if (i != -1)
    {
        std::cout << -1 << std::endl;
        /* code */
        return;
    }

    i = 0;
    string temp = ans;
    while (temp[i] == '0')
    {
        i++;
        /* code */
    }
    ans = "";
    while (i != temp.length())
    {
        ans += temp[i];
        i++;
        /* code */
    }

    std::cout << ans << std::endl;
}
int main()
{
    fast_cin();
    ll test_cases;
    cin >> test_cases;
    for (int it = 1; it <= test_cases; it++)
    {
        fun();
    }
    return 0;
}