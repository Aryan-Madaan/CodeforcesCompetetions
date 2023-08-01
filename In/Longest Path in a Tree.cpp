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

void dfs(vector<vector <int > >& tree, vector<bool>&vis,int node,int dist,int &maxdist,int &maxnode)
{
    vis[node] = 1;
    if(maxdist<=dist)
    {
        maxdist = dist;
        maxnode = node;
    }
    rep(i,tree[node].size())
    {
        if(!vis[tree[node][i]])
        {
            dfs(tree,vis,tree[node][i],dist+1,maxdist,maxnode);
        }
    }
    // vis[node] = 0;
}



void solve()
{
    int t=1;
    // cin >> t;
    while(t--)
    {
        int n,a,b;
        cin >> n;
        vector< vector< int > >graph(n);
        vector<bool> vis(n,0);
        rep(i,n-1)
        {
            cin >> a >> b;
            graph[a-1].pb(b-1);
            graph[b-1].pb(a-1);
        }
        int maxdist= 0,maxnode=0,maxinode=0;
        dfs(graph,vis,0,0,maxdist,maxnode);
        rep(i,n) vis[i]=0;
        // cout << maxnode << "\n";
        // maxdist = 0;
        dfs(graph,vis,maxnode,0,maxdist,maxinode);
        cout << maxdist <<"\n";
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