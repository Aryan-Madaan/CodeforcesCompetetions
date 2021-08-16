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

vector<bool>v(1e6+2,1);
void create_prime(){
    v[0]=0;
    v[1]=0;
    for(int i =2;i<v.size();i++)
    {
        if(v[i])
        {
            for(int j=2*i;j<v.size();j+=i)
            {
                v[j]=0;
            }
        }
    }
}

void solve()
{
    int t=1;
    //cin >> t;
    create_prime();
    while(t--)
    {
        int n;
        cin >> n;
        int m =1;
                        while(v[n*m+1])
                        {
                            m++;
                        }
                        cout << m;
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


