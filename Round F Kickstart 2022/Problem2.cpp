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
bool vis[100005];


void dfs(int curr,int h,vector<int> &v,vector< vector<int> > &vv)
{
        vis[curr] =1;
        v[h]++;
        for(int i =0;i<vv[curr].size();i++)
        {
            if(!vis[vv[curr][i]])
            {
                dfs(vv[curr][i],h+1,v,vv);
            }
        }
}


void solve()
{
    int t=1,p=1;
    cin >> t;
    while(t--)
    {
        for(int i =0;i<100005;i++)
        {
            vis[i]=0;
        }
        int n,qq;
        cin >> n >> qq;
        int curr_level = 0;
        vector< vector<int> > vv(n);
        vector<int > v(n,0);
        int con1,con2;
        for(int i =0;i<n-1;i++)
        {
            cin >> con1 >> con2;
            vv[con1-1].push_back(con2-1);
            vv[con2-1].push_back(con1-1);
        }
        v.pb(1);
        for(int i =0;i<n;i++)
        {
            if(!vis[i]){
            dfs(i,0,v,vv);
            }
        }
        int c,sum = qq;
        for(int i =0;i<qq;i++)
        {   
            cin >> c;
        }
        int ans = 0;
        // for(int i =0;i<v.size();i++)
        // {
        //     cout << v[i] << " ";
        // }
        // cout <<endl;
        for(int i =0;i<v.size()&&v[i]!=0;i++)
        {
            if(v[i]==0)
            break;
            if(sum>=v[i])
            {
                sum-=v[i];
                ans+=v[i];
            }
            else
            {
                break;
            }
        }
        cout << "Case #" << p << ": " << ans << endl;
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


