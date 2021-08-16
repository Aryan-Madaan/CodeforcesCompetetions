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
    //cin >> t;
    while(t--)
    {
        vector<pair<int,int>>v(3);
        vector<int>v1(3,0);
        cin >> v[0].ff >> v[1].ff >>v[2].ff;
        v[0].ss=1;
        v[1].ss=2;
        v[2].ss=3;
        unordered_map<int,int>ma;
        ma[3]=0;
        ma[4]=2;
        ma[5]=1;
        sort(v.begin(),v.end());
        if((abs(v[0].ff+v[1].ff-v[2].ff)%2!=0)||(v[0].ff>v[1].ff+v[2].ff)||(v[1].ff>v[2].ff+v[0].ff)||(v[2].ff>v[1].ff+v[0].ff))
        {
            cout << "Impossible";
        }
        else
        {
            int z= (v[0].ff+v[1].ff-v[2].ff)/2;
            v[0].ff-=z;
            v[1].ff-=z;
            v1[ma[v[0].ss+v[1].ss]]=z;
            v1[ma[v[0].ss+v[2].ss]]=v[0].ff;
            v1[ma[v[1].ss+v[2].ss]]=v[1].ff;
            rep(i,3)
            cout << v1[i] <<" ";
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


