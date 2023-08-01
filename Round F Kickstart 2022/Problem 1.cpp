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
    int t=1,p=1;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector < pair <string,int> >pp2;
        vector < pair <int,int> >pp1;
        string a;
        int b,c;
        for(int i =0;i<n;i++)
        {
            cin >> a >> b >> c;
            pp2.push_back(make_pair(a,c));
            pp1.push_back(make_pair(b,c));
        }
        sort(pp2.begin(),pp2.end());
        sort(pp1.begin(),pp1.end());
        int ans = 0;
        for(int i =0;i<n;i++)
        {
            if(pp1[i].second == pp2[i].second)
            ans++;
        }
        cout << "Case #" << p << ": " << ans << endl;
        p++;
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


