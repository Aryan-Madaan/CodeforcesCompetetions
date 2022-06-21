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
        int z,q;
        vector<int>v(10,0);
        rep(i,n)
        {
            cin >> z;
            q = z;
            q = z - (q/10)*10;
            v[q]++;
        }
        bool f =0;
        rep(i,10)
        {
            if(!f)
            rep(j,10)
            {
                if(!f)
                rep(k,10)
                {
                    v[i]--;
                    v[k]--;
                    v[j]--;
                    if(v[i]>=0&&v[j]>=0&&v[k]>=0)
                    {
                        if((i+j+k)%10==3)
                        f=1;
                    }
                    v[i]++;v[k]++;v[j]++;
                }
            }
        }
        if(f)
        cout << "YES\n";
        else
        cout << "NO\n";
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


