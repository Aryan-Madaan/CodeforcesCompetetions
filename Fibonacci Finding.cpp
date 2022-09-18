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



long long mat[2][2];

int res1 =0 ,res2 = 0;
void multiply(int a,int b,int n){
    res1 = a;
    res2 = b;
    mat[0][0] = 0;
    mat[0][1] = mat[1][1] = mat[1][0] = 1;
    while(n>0)
    {
        if(n%2==1)
        {
            int temp1=0,temp2=0;
            temp1 = (res2*mat[0][1])%mod;
            temp2 = (res1*mat[1][0] +res2*mat[1][1])%mod;
            res1 = temp1%mod;
            res2 =temp2%mod;
        }
        long long res[2][2];
        rep(i,2)
        rep(j,2)
        res[i][j]=0;
        rep(i,2)
        {
            rep(j,2)
            {
                rep(k,2)
                {
                    res[i][j] += (mat[i][k]*mat[k][j])%mod;
                }
            }
        }
        rep(i,2)
        {
            rep(j,2)
            {
                mat[i][j] = res[i][j]%mod;
            }
        }
        n = n/2;
    }
    
}


void solve()
{
    int t=1;
    cin >> t;
    while(t--)
    {
        int a,b,n;
        cin >> a >> b >> n;
        multiply(a,b,n);
        cout << res1 << endl;
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


