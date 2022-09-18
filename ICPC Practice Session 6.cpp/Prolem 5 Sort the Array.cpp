//                                               Created by Aryan Madaan.
//---------------------------------------------------------------------------------------------------
#include <bits/stdc++.h>
#include <unordered_map>

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
        vector<int>v(n,0);
        vector< pair<int,int> >srt(n);
        unordered_map <ll,bool > vv;
        for(ll i =1;i*i<=2147483647;i++)
            {
                vv[i*i] =1;
            }
        rep(i,n)
        {
            cin >> v[i];
            srt[i].first = v[i];
            srt[i].second = i;
        }
        sort(srt.begin(),srt.end());
        bool f=1;
        for(int i=0;i<n;i++)
        {
            if(srt[i].second!=i)
            {
                f=0;
            }
        }
        if(f)
        {
            cout << "YES\n";
        }
        else
        {
            f=1;
            
            rep(i,n)
            {
                if(srt[i].first!=v[i])
                {
                    if(vv.find(ll(srt[i].second+1)*ll(i+1))==vv.end())
                        f=0;
                }
            }
            // for(int i =0;i<n;i++)
            // {
            //     if(srt[i].second!=i)
            //     {
            //         if(vv.find(srt[i].second+1)==vv.end()||vv.find(i+1)==vv.end())
            //         {
                        // if(vv.find((srt[i].second+1)*(i+1))==vv.end())
                        // f=0;
            //         }
            //     }
            // }
            if(f)
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
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


