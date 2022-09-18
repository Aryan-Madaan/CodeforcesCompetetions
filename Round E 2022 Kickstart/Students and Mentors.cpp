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
    cin >> t;
    int p = 1;
    while(t--)
    {
        int n;
        cin >> n;
        vector<pair<ll,int> >v(n);
        vector<ll> ans(n,-1);
        rep(i,n) {cin >> v[i].first; v[i].second = i;}
        sort(v.begin(),v.end());
        int k=0;
        rep(i,n)
        {
            while(k+1<n&&v[k+1].first<=2*v[i].first){
                k++;
            }
            if(k==i&&i==0)
            {
                ans[v[i].second] = -1;
            }
            else if(k>i)
            {
                ans[v[i].second] = v[k].first;
            }
            else{
                ans[v[i].second] = v[i-1].first;
            }
        }
        cout << "Case #" << p << ": ";
        rep(i,n) cout << ans[i] << " ";
        cout << endl;
        p++;
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


