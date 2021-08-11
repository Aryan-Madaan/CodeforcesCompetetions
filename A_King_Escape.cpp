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


//---------------------------------------------------------------------------------------------------




void solve()
{
    int t=1;
    //cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        pair<int,int> a,b,c;
        cin >> a.ff >> a.ss >> b.ff >> b.ss >> c.ff >> c.ss;
        bool f=1;
        if(a.ff ==c.ff||a.ss == c.ss)
        f=0;
        else if((a.ff-c.ff>0&&a.ff-b.ff>0)||(a.ff-c.ff<0&&a.ff-b.ff<0))
        {
            if((a.ss-c.ss>0&&a.ss-b.ss>0)||(a.ss-c.ss<0&&a.ss-b.ss<0))
            {
                f=1;
            }
            else
            f=0;
        }
        else
        f=0;
        if(f)
        cout << "YES";
        else
        cout << "NO";
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


