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

// int gcd(int a, int b)
// {
//     if (b == 0)
//         return a;
//     return gcd(b, a % b);
// }
int randomize()
{
return (rand() % 1000);
}


//---------------------------------------------------------------------------------------------------


// ll gcd(ll a,ll b)
// {
//     if (b == 0)
//         return a;
//     return gcd(b, a % b);
// }

ll div(ll a,ll div,int n)
{
    ll res =1;
    while(n)
    {
        if(n%2)
        {
            res  = ((res%div)*(a%div))%div;
        }
        a  = ((a%div)*(a%div))%div;
        n/=2;
    }
    return res;
}

void solve()
{
    int t=1;
    cin >> t;
    while(t--)
    {
        vector<int> v;
        ll a,b,n;
        cin >> a >> b >> n;
        ll diff = a - b;
        if(diff==0)
        {
            cout <<( div(a,mod,n)+div(b,mod,n) )%mod<<endl;
        }
        else
        {
            for(int i=1;i<=sqrt(diff);i++)
            {
                if(diff%i==0)
                {
                    v.pb(i);
                    v.pb(diff/i);
                }
            }
            ll curr = 0;
            for(int i =0;i<v.size();i++)
            {
                if((div(a,v[i],n)+div(b,v[i],n))%v[i]==0)
                {
                    if(curr<v[i])
                    {
                        curr = v[i];
                    }
                }
            }
            cout << curr%mod << endl;
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


