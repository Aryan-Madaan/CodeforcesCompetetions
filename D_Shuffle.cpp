//                                               Created by Aryan Madaan.
//---------------------------------------------------------------------------------------------------
#include <bits/stdc++.h>

#include <stdio.h>
using namespace std;
#define Expresso std::ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define mod 1000000007
#define mod1  998244353
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
        int n,k;
        cin >> n >> k;
        string s;
        cin >> s;
        vector<int>v(n,0);
        int start=0,end=0;
        int count =0,onecount=0;
        for(int i =0;i<k;i++)
        {
            if(s[i]=='1')
            count++;
            v[i]=count;
        }
        int mcount=0;
        while(end<n&&start<n)
        {
            if(v[end]-v[start]<=k)
            {
                mcount = max(mcount,end-start);
                if(mcount<end-start)
                onecount=v[end]-v[start];
                end++;
            }
            else
            {
                start++;
            }
        }
        int zcount = mcount - onecount;
        int biggercount = max(zcount,onecount);
        int smallcount = min(zcount,onecount);
        vector<ll> z(mcount-biggercount,0);
        for(int i =z.size()-1;i>=0;i--)
        {
            z[i] = mcount-i;
        }
        for(int i =2;i<=smallcount;i++)
        {
            for(int j=0;j<z.size();j++)
            {
                if(z[j]%i==0)
                {
                    z[j]/=i;
                    break;
                }
            }
        }
        ll out=1;
        for(int i =0;i<z.size();i++)
        {
            out*=z[i];
            out%=mod1;
        }
        cout << out;
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


