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


bool dfs(vector<vector<int>>&v,vector<bool>&visit,vector<bool>&col,int i)
{
    rep(j,v[i].size())
    {
        if(visit[v[i][j]])
        {
            visit[v[i][j]]=0;
            col[v[i][j]] = !col[i];
            if(!dfs(v,visit,col,v[i][j]))return false;
        }
        else
        {
            if(col[i]==col[v[i][j]])
            return false;
        }
    }

    return true;
}

void solve()
{
    int t=1,p=1;
    cin >> t;
    while(t--)
    {
        int n,m,x,y;
        cin >> n >> m;
        vector<vector<int>>v(n);
        rep(i,m)
        {
            cin >> x >>y;
            v[x-1].pb(y-1);
            v[y-1].pb(x-1);
        }
        vector<bool>visit(n,1),col(n,0);
        bool flag=1;
        rep(i,n)
        {
            if(visit[i])
            {
                visit[i]=0;
                col[i]=0;
                if(!dfs(v,visit,col,i))
                flag=0;
            }
        }
        if(flag)
        {
            cout <<"Scenario #"<<p <<":"<<endl << "No suspicious bugs found!"<<endl;
        }
        else
        cout <<"Scenario #"<<p <<":"<<endl <<"Suspicious bugs found!"<<endl;
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