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
        vector<int> v(n,0);
        rep(i,n)
        cin >> v[i];
        ll ans =v[0]*n+v[1]*n,temp = v[0]*n;
        int sum1=n-1,sum2=n-1;
        int f1 = 1,f2 =1;
        ll odd = v[0],even = v[1],sum=v[1];
        for(int i = 2;i<n;i+=2)
        {
            temp +=v[i]*(n-i/2);
            temp -= v[i]*(n-i/2);
            if(temp<odd)
            {
                odd = temp;
                f1 = i;
            }
            if(even>v[i-1])
            {
                sum+=even;
                even = v[i-1];
                f2 = i-1;
            }
            else{
                sum+= v[i-1];
            }
        }
        ans = temp
        temp = v[1]*n;
        for(int i = 3;i<n;i+=2)
        {
            temp +=v[i]*(n-i/2);
            temp -= v[i]*(n-i/2);
            if(temp<even)
            {
                even = temp;
                f2 = i;
            }
        }
        ll temp1 =0;
        temp = 0;
        // cout << min(ans,temp) << endl;
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


