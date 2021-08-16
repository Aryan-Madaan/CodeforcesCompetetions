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
        int r1,c1,r2,c2;
        cin >> r1 >> c1 >> r2 >> c2;
        if(r1==r2&&c1==c2)
        {
            cout << "0 0 0";
        }
        else
        {
            if(r1==r2||c1==c2)
            cout << "1 ";
            else
            cout << "2 ";
            if((r1+c1)%2!=(r2+c2)%2)
            cout << "0 ";
            else if(r2-r1==c2-c1||r2-r1==c1-c2)
            cout << "1 ";
            else
            cout << "2 ";
            if(r1==r2)
            {
                cout <<abs(c2-c1);
            }
            else if(c1==c2)
            {
                cout << abs(r2-r1);
            }
            else
            {
                int z =min(abs(r2-r1),abs(c2-c1));
                int sum = abs(max(abs(r2-r1),abs(c2-c1))-z)+z;
                cout << sum;
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


