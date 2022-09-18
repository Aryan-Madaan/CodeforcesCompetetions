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
int randomize()
{
return (rand() % 1000);
}


//---------------------------------------------------------------------------------------------------




void solve()
{
    int t=1;
    // cin >> t;
    while(t--)
    {
        int n,m;
        cin >> n >> m;
        vector<ll> v(n),front(n,0),back(n,0);
        int old = 0;
        front[0]=0;
        rep(i,n)
        {
            cin >> v[i];
            if(i>0)
            {
                front[i] = max(0ll, old - v[i]) + front[i-1];
            }
            old = v[i];
        }
        old = v[n-1];
        back[n-1] = 0;
        for(int i =n-2;i>=0;i--)
        {
            back[i] = max(old-v[i],0ll) + back[i+1];
            old = v[i];
        }
        vector<ll> ans;
        rep(i,m)
        {
            int s,y;
            cin >> s >> y;
            if(s<y)
            {
                ans.push_back(front[y-1]-front[s-1]);
            }
            else
            {
                ans.push_back(back[y-1]-back[s-1]);
            }
        }
        rep(i,m)
        {
            cout << ans[i] << endl;
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


