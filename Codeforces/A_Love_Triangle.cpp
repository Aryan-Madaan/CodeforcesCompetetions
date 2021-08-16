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
#define rep(i,n) for(int i =0;i<n;i++)
#define endl '\n'
const double eps = 1e-6, pi = acos(-1);
const char nl = '\n';

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}


//---------------------------------------------------------------------------------------------------

void solve()
{
    int t=1;
    //cin >> t;
    while(t--)
    {
        int n;
        cin >>n;
        vector<int>v(n,-1);
        rep(i,n)
        {
            cin >> v[i];
            v[i]--;
        }
        bool f=0;
        rep(i,n)
        {
            vector<int> y;
            y.pb(v[i]);
            if(y[0]!=i){
            y.pb(v[y[0]]);
            if(y[1]!=i||y[1]!=y[0])
            {
                y.pb(v[y[1]]);
                if(y[2]==i)
                {
                    f = 1;
                    cout << "YES";
                    break;
                }
            }
            }
        }
        if(!f)
        {
            cout << "NO";
        }
    }
}
/*
*/





//---------------------------------------------------------------------------------------------------
int main() {
   cout.precision(numeric_limits<double>::max_digits10);
       cout << setprecision(15) << fixed;
    Expresso
    solve();
    return 0;
}


