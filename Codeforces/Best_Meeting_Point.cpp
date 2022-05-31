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
    //cin >> t;
    while(t--)
    {
        int x,y,u=0,w=0;
        cin >> x >> y;
        int x_dist = 0,y_dist = 0;
        vector< vector<bool> > v(x,vector<bool>(y,0));
        vector<int> v_x,v_y;
        bool k =0;
        rep(i,x)
        {
            rep(j,y)
            {
                cin >> k;
                v[i][j] = k;
               
               if(k)
               {
                   v_x.pb(i+1);
                   u+=i+1;
                   w+=j+1;
                   v_y.pb(j+1);
               }
               k=0;
            }
        }
        sort(v_y.begin(),v_y.end());
        int o_x=0,o_y=0;
        // o_x = u/v_x.size();
        // o_y = w/v_y.size();
        if(v_x.size()%2==0)
        {
            o_x = v_x[v_x.size()/2];
            o_y = v_y[v_y.size()/2];
        }
        else
        {
            o_x = v_x[((v_x.size()+1)/2)-1];
            o_y = v_y[((v_y.size()+1)/2)-1];
        }
        ll dist =0;
         rep(i,x)
        {
            rep(j,y)
            {
                if(v[i][j])
                dist += abs(i+1-o_x) + abs(j+1-o_y);
            }
        }
        cout << dist;
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


