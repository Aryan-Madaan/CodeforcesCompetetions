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
    while(t--)
    {
        int n;
        cin >> n;
        vector<vector<int>>v(n+1);
        vector<int>curr;
        rep(i,n)
        {
            bool x;
            cin >> x;
            if(x)
            {
                v[n].pb(i);
            }
            else
                v[i].pb(n);
            v[i].pb(i+1);
        }
        bool f=0;
        int point =0,point1=0,i=0;
        if(v[n].size()>0&&v[n][0]==0)
        {
            f=1;
            curr.pb(n+1);
            curr.pb(1);
                    i++;
        }        
        for (;i<n;i++)
        {
            if(v[i][0]==n&&!f)
            {
                while(point<v[n].size()&&v[n][point]<i+1)
                {
                    point++;
                }
                if(point<v[n].size()&&v[n][point]==i+1)
                {
                    f =1;
                    curr.pb(i+1);
                    curr.pb(n+1);
                }
                else
                {
                    curr.pb(i+1);
                }
            }
            else
            {
                curr.pb(i+1);
            }
        }
        if(!f&&v[n-1][0]==n)
        {
            f=1;
            curr.pb(n+1);
        }        
        if(f||curr.size()==n+1)
        {
            rep(i,n+1)
            cout << curr[i] << " ";
            cout << endl;
        }
        else
        {
            cout << "-1\n";
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


