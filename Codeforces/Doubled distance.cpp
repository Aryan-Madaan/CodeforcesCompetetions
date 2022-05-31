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
        vector<int> v(n,0);
        vector<pair<int,int>> z(n,mp(0,0));
        rep(i,n)
        {
            cin >> v[i];
        }
        bool flag =1;
        for(int i =0; flag&&i<n;i++)
        {
            if(v[i]==0)
            {
                z[i].first = z[i+1].first = z[i+1].first = 1;
                z[i].second = z[i+1].second = z[i+1].second = 0;
            }
            if(v[i] == 1)
            {
                z[i].first = z[i+1].first = z[i+1].second=1 ;
                z[i].second = z[i+2].first = z[i+2].second =0;
            }
            if(v[i] ==2)
            {
                
            }
            if(v[i] == 3)
            {
                
            }
        }
        if(flag)
        cout << "Yes\n";
        else
        cout << "No\n";
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


