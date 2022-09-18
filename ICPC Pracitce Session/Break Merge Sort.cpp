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
        vector<vector<int> > v(n,vector<int>());
        for(int i =0;i<n;i++)
        {
            int k;
            cin >> k;
            for(int j=0;j<k;j++){
                int y = 0;
                cin >> y;
                v[i].push_back(y);
            }
        }
        long long num_arr = 0;
        for(int i =0;i<n;i++)
        {
            int l = 0,r =1;
            bool ty= 1;
            while(r<v[i].size())
            {
                if(v[i][r-1]>v[i][r])
                {
                    num_arr+=min((long)r-(long)l,(long)v[i].size()-(long)r);
                    num_arr += ((long)v[i].size()-l);
                    // cout << i << " " << l << " " << r << " " << ((long)v[i].size()-l) <<" " <<min((long)r-(long)l,(long)v[i].size()-(long)r)  << endl;
                    l = r;
                }
                r++;
            }
        }
        long long ans =v[0].size();
        if(n>1){
            for(int i =1;i<n;i++)
            {
                num_arr+=v[i].size()+ans;
                ans+=v[i].size();
            }
        }
        cout << num_arr << "\n";
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


