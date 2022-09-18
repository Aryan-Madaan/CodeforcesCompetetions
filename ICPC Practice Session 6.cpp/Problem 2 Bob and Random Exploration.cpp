//                                               Created by Aryan Madaan.
//---------------------------------------------------------------------------------------------------
#include <bits/stdc++.h>

#include <stdio.h>
using namespace std;
#define Expresso std::ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define mod 1000000007
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
typedef long double ld;
typedef unsigned long long ull;
#define mp make_pair
#define ff first
#define ss second
#define pb(v) push_back(v)
#define INF 2e9
#define rep(i, n) for (int i = 0; i < n; i++)
#define endl '\n'
const double eps = 1e-6, pi = acos(-1);
const char nl = '\n';

ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
int randomize()
{
    return (rand() % 1000);
}

//---------------------------------------------------------------------------------------------------

ll power(ll a)
{
    ll m = mod - 2;
    ll res = 1;
    while (m)
    {
        if (m % 2)
            res = ((res % mod) * (a % mod)) % mod;
        a = ((a % mod) * (a % mod)) % mod;
        m /= 2;
    }
    return res;
}

void solve()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        long double my = 0;
        vector<vector<char> > charvec(n, vector<char>(m));
        rep(i, n) {rep(j, m)
        {
            cin >> charvec[i][j];
            if (charvec[i][j] == '1')
                    my++;
        }
        }
        long double x, y, p;
        cin >> x >> y;
        p = x / y;
        my = 1.0 / my;
        vector<vector<double> > values(n, vector<double>(m, 0));
        long double ans = 0;
        long double extra =0 ;
        rep(i, n)
        {
            rep(j, m)
            {
                if (charvec[i][j] == '1')
                {
                    values[i][j] = my;
                }
                else if (charvec[i][j] == '2')
                {
                    if (i != 0)
                    {
                        if(values[i - 1][j]!=0)
                        values[i][j] += values[i - 1][j] * (1 - p);
                    }
                    if (j != 0)
                    {
                        if(values[i][j-1]!=0)
                        values[i][j] += values[i][j - 1] * (p);
                    }
                    ans += values[i][j];
                }
                else if (charvec[i][j] == '.')
                {
                    if (i != 0)
                    {
                        if(values[i - 1][j]!=0)
                        values[i][j] += values[i - 1][j] *(1 - p);
                    }
                    if (j != 0)
                    {
                        if(values[i][j-1]!=0)
                        values[i][j] += values[i][j - 1] *(p);
                    }
                }
                else if (charvec[i][j] == 'x')
                {
                    if (i != 0)
                    {
                        if(values[i - 1][j]!=0)
                        values[i][j] += values[i - 1][j] *(1 - p);
                    }
                    if (j != 0)
                    {
                        if(values[i][j-1]!=0)
                        values[i][j] += values[i][j - 1] *(p);
                    }

                    ans *=2;
                }
            }
        }
        // long double intVal = floor(ans);

        // // Fetch fractional part of the decimal
        // long double fVal = ans - intVal;

        // // Consider precision value to
        // // convert fractional part to
        // // integral equivalent
        long long deno = 10000000000LL;
        long long an = ans * deno;
        // // Calculate GCD of integral
        // // equivalent of fractional
        // // part and precision value
        // long long gcdVal = gcd(round(fVal * pVal), pVal);
        // cout << gcdVal << endl;
        // // Calculate num and deno
        // long long num = round(fVal * pVal) / gcdVal;
        // long long deno = pVal / gcdVal;
        // cout << num << " " << deno << endl;
        long long val = gcd(an,deno);
        cout << (((an/val) % mod) * power(deno/val)) % mod << endl;
        ;
        // Print the fraction
    }
}
/*
 */

//---------------------------------------------------------------------------------------------------
int main()
{
    cout.precision(numeric_limits<double>::max_digits10);
    cout << setprecision(15) << fixed;
    Expresso
    solve();
    return 0;
}





/*

    n = 3, m = 3

    1.2
    ..2
    222

    my = 1;

    my = 1.0/my;

    x = 1, y = 2;
    
    p = 0.5


    1.2          0 (1) 0
    ..2          (1) (1) 0
    222          0 0 0


    ans += (1+1-p)*my;
    ans+(1+p)*my;
    ans = (1+1-p)*my;

    ans = (3);

    3


*/