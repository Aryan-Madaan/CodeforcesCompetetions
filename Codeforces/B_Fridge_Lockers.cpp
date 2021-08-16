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
    cin >> t;
    while(t--)
    {
        int n,m;
        cin >> n >>m;
        vector<int> v(n,0),v2(n,0);
        rep(i,n)
        cin >> v[i];
        ll sum =0;
        if(m<n||n<3)
        {
            cout << "-1"<<endl;
        }
        else{
            int z=0,min1=INT_MAX,min2=INT_MAX,pos1=0,pos2=0;
            rep(i,n)
            {
                 if(i+1==n)
                {
                    sum+=v[i]+v[0];
                }
                else
                sum+=v[i]+v[i+1];
                if(min1>v[i])
                {
                    min2 = min1;
                    pos2=pos1;
                    pos1=i;
                    min1 = v[i];
                }
                else if(min2>v[i])
                {min2 = v[i];
                pos2=i;}
            }
            for(int i =n;i<m;i++)
            {
                sum+=min1+min2;
            }
            cout << sum << endl;
            rep(i,n)
            {
                if(i+1==n)
                {
                    cout << i+1 << " " << 1 << endl;
                }
                else
                cout << i+1<< " "<<i+2 << endl;
            }
            for(int i =n;i<m;i++)
            {
                cout << pos1+1 << " " <<pos2 + 1<<endl;
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


