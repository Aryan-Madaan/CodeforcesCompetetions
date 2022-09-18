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

const int maxn=2e5+5;
vector<pair<int,int> > values(maxn);
vector< vector < int>  >  vertices(maxn);
vector<ll>ans(maxn);
ll cura =0;
ll curb = 0;
vector<ll>pre;

void dfs1(int idx)
{
    cura += values[idx].first;
    curb += values[idx].second;
    pre.push_back(curb);
    ans[idx]=upper_bound(pre.begin(),pre.end(),cura)-pre.begin();
    rep(i,vertices[idx].size())
    dfs1(vertices[idx][i]);
    cura -= values[idx].first;
    curb -= values[idx].second;
    pre.pop_back();
}



void solve()
{
    int t=1;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        for(int i=0;i<n;++i) vertices[i].clear();
        rep(i,n-1)
        {
            int p,q,r;
            cin >> p >> q >>r;
            vertices[p-1].push_back(i+1);
            values[i+1] = make_pair(q,r);
        }
        dfs1(0);
        for(int i =1;i<n;i++)
        {
            cout << ans[i]-1 << " ";
        }
        cout << endl;
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


