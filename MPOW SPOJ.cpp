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

const int MAXN = 51;
ll ans[MAXN][MAXN],iden[MAXN][MAXN];

void multiply(bool f,int n){
    ll res[n][n];
    rep(i,n)
    rep(j,n)
    res[i][j]=0;
    if(f)
    {
        rep(i,n)
        {
            rep(j,n)
            {
                rep(k,n)
                {
                    res[i][j] += (ans[i][k]*iden[k][j])%mod;
                    res[i][j] = res[i][j]%mod;
                }
            }
        }
        rep(i,n)rep(j,n)iden[i][j] = res[i][j];
    }
    else{
        rep(i,n)
        {
            rep(j,n)
            {
                rep(k,n)
                {
                    res[i][j] += (ans[i][k]*ans[k][j])%mod;
                    res[i][j] = res[i][j]%mod;
                }
            }
        }
        rep(i,n)rep(j,n)ans[i][j] = res[i][j];
    }
}
void find(int n,int m){
    while(m>0)
    {
        
        if(m%2==1)
        {
            multiply(1,n);
        }
        multiply(0,n);
        m =m/2;
    }
}


void solve()
{
    int t=1;
    cin >> t;
    while(t--)
    {
        rep(i,MAXN)
        {
            rep(j,MAXN)
            {
                iden[i][j]=0;
                ans[i][j]=0;
            }
            iden[i][i] = 1;
        }
        int n,m;
        cin >> n >>m;
        rep(i,n)
        {
            rep(j,n)
            {
                cin >> ans[i][j];
            }
        }
        find(n,m);
        rep(i,n)
        {
            rep(j,n)
            {
                cout << iden[i][j] << " ";            
            }
            cout << endl;
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


