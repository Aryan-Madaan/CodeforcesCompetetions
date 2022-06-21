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
        vector<int> v(n);
        rep(i,n)
        cin >> v[i];
        sort(v.begin(),v.end());
        int dup=0,curr_dup=0;
        vector<int>diff;
        int count=0,cnt1=0;
        rep(i,n-1)
        {
            if(v[i]==v[i+1])
            curr_dup++;
            else
            {
                cnt1+=curr_dup%2;
                count+=(curr_dup/2)*2;
                curr_dup=0;
            }
        }
        if(curr_dup>0){
        cnt1+=curr_dup%2;
        count+=(curr_dup/2)*2;
        }
        n-=count+cnt1;
        if(cnt1%2==1)
        n--;
        cout << n << "\n";

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

