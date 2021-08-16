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
        int n,alice;
        cin >> n >>alice;
        vector<int> front(n,0),back(n,0);
        rep(i,n)
        {
            cin >> front[i];
        }
        rep(i,n)
        {
            cin >> back[i];
        }
        bool f=0;
        if(front[0]==1&&front[alice-1]==1)
        f=1;
        else if(back[alice-1]&&front[0])
        {
            for(int i=alice-1;i<n;i++)
            {
                if(front[i]==1&&back[i]==1)
                {
                    f=1;
                    break;
                }
            }
        }
        else
        {
            f=0;
        }
        if(f)
        {
            cout << "YES";
        }
        else
        {
            cout<<"NO";
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


