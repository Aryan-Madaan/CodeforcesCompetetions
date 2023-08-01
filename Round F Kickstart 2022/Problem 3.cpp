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
    int t=1,p=1;
    cin >> t;
    while(t--)
    {
        long d,n,x,ans = 0;
        cin >> d >> n >> x;
        vector< pair<pair<int,int>,int> > v1(n);
        int z;
        for(int i=0;i<n;i++)
        {
            cin >> v1[i].first.second >> v1[i].first.first>>v1[i].second;
        }
        sort(v1.begin(),v1.end(),greater<pair<pair<int,int>,int> >());
        // for(int i =0;i<n;i++)
        // {
        //     cout << v1[i].first.second << " " <<  v1[i].first.first <<endl;
        // }
        long curr = 0;
        for(int i =0;i<n;i++)
        {
            if(v1[i].first.first>d-1)
                continue;
            if(curr+v1[i].first.second<=x)
            {
                ans += v1[i].first.second * v1[i].second;
                curr+=  v1[i].first.second;
            }
            else
            {
                    ans += (x-curr+1) * v1[i].second;
                    v1[i].first.second -= (x-curr+1);
                    i--;
                    curr = x;
            }
            if(curr == x)
            {
                d--;
                curr = 0;
            }
            // cout << ans <<" " <<  v1[i].first.second << " " << v1[i].first.first << endl;
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


