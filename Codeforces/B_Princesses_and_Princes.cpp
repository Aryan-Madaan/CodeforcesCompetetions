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
        int n;
        cin >> n;
        vector<vector<int>>v(n); 
        vector<bool>v1(n,0);
        rep(i,n)
        {
            int k;
            cin >>k;
            rep(j,k)
            {
                int z;
                cin >> z;
                v[i].pb(z);
            }
        }
        int unmarried=-1;
        rep(i,n)
        {
            bool f=0;
            rep(j,v[i].size())
            {
                if(!v1[v[i][j]-1])
                {
                    v1[v[i][j]-1]=1;
                    // cout << "i :" <<i << " "<<v[i][j]-1 << " "<<v1[v[i][j]-1]<<endl;
                    f=1;
                    break;
                }
            }
            if(!f)
            {
                unmarried=i;
            }
        }
        if(unmarried!=-1){
            int marry =-1;
            rep(i,n)
            {
                if(!v1[i])
                {
                    marry=i;
                    break;
                }
            }
            if(marry==-1)
            {
                cout << "OPTIMAL" << endl;
            }
            else
            {
                cout << "IMPROVE" << endl;
                cout << unmarried+1 << " " << marry+1  <<endl;
            }
        }
        else
        {
            cout << "OPTIMAL" << endl;
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


