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



void dfs(vector<bool> &vis,int curr,vector< vector<int> > &v)
{
    vis[curr] =1;
    for(int i =0;i<v[curr].size();i++)
    {
        if(!vis[v[curr][i]]){
            dfs(vis,v[curr][i],v);
        }
    }
}

void solve()
{
    int t=1;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        
        vector< vector <int> > v(2*n);
        vector<bool> vis(2*n,0);
        stack <int> st;
        int lcnt = 0,rcnt = 0;
        vector<int>vv;
        vv.push_back(0);
        for(int i =0;i<2*n;i++)
        {
            if(s[i]=='(')
            {
                lcnt++;
                st.push(i);
            }
            else{
                rcnt++;
                v[i].push_back(st.top());
                v[st.top()].push_back(i);
                st.pop();
            }
            if(lcnt==rcnt)
            {
                v[i].push_back(vv[vv.size()-1]);
                v[vv[vv.size()-1]].push_back(i);
                vv.push_back(i);
            }
        }
        // cout << "\n\n\n";
        // rep(i,2*n){
        // rep(j,v[i].size())
        // {
        //     cout << v[i][j] << " ";
        // }
        // cout << "end" << endl;
        // }
        // cout << "\n\n\n";
        long count = 0;
        for(int i =0;i<2*n;i++)
        {
            if(!vis[i])
            {
                count++;
                dfs(vis,i,v);
            }
        }
        cout << count << endl;
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


