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
        int x=8,y=8;
        vector<vector<char> > bis(x,vector<char>(8,'.'));
        int r,c;
        rep(i,x)
        rep(j,y)
        cin >> bis[i][j];
        for(int i =1;i<x-1;i++)
        {
            for(int j=1;j<y-1;j++)
            {
                if(bis[i][j]=='#'&&bis[i-1][j-1]=='#'&&bis[i+1][j+1]=='#'&&bis[i-1][j+1]=='#'&&bis[i+1][j-1]=='#')
                {r = i+1;c= j+1;}
                
            }
        }
        cout << r << " " << c <<"\n";
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


