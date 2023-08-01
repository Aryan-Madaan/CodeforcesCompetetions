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


int dfs(vector<vector< int > >&graph,vector<bool>&vis,vector<int>&subSize,int node)
{
    vis[node]=1;
    int curr_size = 1;
    rep(i,graph[node].size())
    {
        if(!vis[graph[node][i]])
        {
            curr_size += dfs(graph,vis,subSize,graph[node][i]);
        }
    }
    subSize[node]=curr_size;
    return curr_size;
}



void solve()
{
    int t=1;
    cin >> t;
    while(t--)
    {
        int n,m,a,b,q;
        cin >> n >> m >> q;
         vector<vector< int > > graph(n);
         vector<bool> vis(n,0);
         vector<int>subSize(n,0);
         rep(i,m)
         {
            cin >> a >> b;
            graph[a-1].pb(b-1);
            graph[b-1].pb(a-1);
         }
         rep(i,n)
         {
            if(!vis[i])
            {
                dfs(graph,vis,subSize,i);
            }
         }
         rep(i,q)
         {
            cin >> a;
            cout << subSize[a-1] << "\n";
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


