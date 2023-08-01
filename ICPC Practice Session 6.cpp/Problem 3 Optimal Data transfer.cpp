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
        int n,m;
        cin >> n >>m;
        vector<string> binary(n);
        rep(i,n)
        {
            cin >> binary[i];
        }
        // sort(binary.begin(),binary.end(),greater<string>());
        sort(binary.begin(),binary.end());
        ll curr_deduction=0;
        ll cost =0;
        for(int i =0;i<n;i++)
        {
            if(i==0)
            {
                cost+=m;
            }
            else
            {
                while(curr_deduction<m&&binary[i-1].substr(0,curr_deduction)==binary[i].substr(0,curr_deduction))
                    {
                        curr_deduction++;
                    }
                    while(curr_deduction>0&&binary[i-1].substr(0,curr_deduction)!=binary[i].substr(0,curr_deduction))
                    {
                        curr_deduction--;
                    }
                cost+= ((ll)m-curr_deduction);
            }
        }
        cout << cost << "\n";
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

