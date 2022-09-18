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


bool comp(pair<int,int>&a,pair<int,int>&b)
{
    return a.first>b.first;
}

void solve()
{
    int t=1;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> v(n,0);
        rep(i,n)
        cin >> v[i];
        ll sum =0;
        if(n%2==1)
        {
            for(int i =1;i<n;i+=2)
            sum += max(0,max(v[i-1]-v[i]+1,v[i+1]-v[i]+1));
            cout << sum << endl;
        }
        else
        {
            ll ans = LLONG_MAX;
            for(int i =1;i<n-1;i+=2)
            sum += max(0,max(v[i-1]-v[i]+1,v[i+1]-v[i]+1));
            ans = sum;
            for(int i = n-2; i>0; i-=2)
            {
                sum -= max(0,max(v[i-2]-v[i-1]+1,v[i]-v[i-1]+1));
                sum += max(0,max(v[i-1]-v[i]+1,v[i+1]-v[i]+1));
                ans = min(ans,sum);
            }
            cout << ans << endl;
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


