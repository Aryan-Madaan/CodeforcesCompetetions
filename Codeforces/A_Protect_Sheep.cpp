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
        int r,c;
        cin >> r >> c;
        vector<vector<char>>v(r,vector<char>(c,'.'));
        rep(i,r)
        {
            rep(j,c)
            {
                cin >>v[i][j];
            }
        }
        bool f =true;
        rep(i,r)
        {
            rep(j,c)
            {
                if(v[i][j]=='S'){
                    if(i!=0)
                    {
                        if(v[i-1][j]=='W')
                        {
                            f=false;
                        }
                        else if(v[i-1][j]=='.')
                        v[i-1][j]='D';
                    }
                     if(i!=r-1)
                    {
                        if(v[i+1][j]=='W')
                        {
                            f=false;
                        }
                        else if(v[i+1][j]=='.')
                        v[i+1][j]='D';
                    }
                     if(j!=0)
                    {
                        if(v[i][j-1]=='W')
                        {
                            f=false;
                        }
                        else if(v[i][j-1]=='.')
                        v[i][j-1]='D';
                    }
                     if(j!=c-1)
                    {
                        if(v[i][j+1]=='W')
                        {
                            f=false;
                        }
                        else if(v[i][j+1]=='.')
                        v[i][j+1]='D';
                    }
                }
            }
        }
        if(f)
        {
            cout << "Yes\n";
            rep(i,r)
        {
            rep(j,c)
            {
                cout << v[i][j];
            }
            if(i<r-1)
            cout << endl;
        }
        }
        else
        {
            cout << "No";
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


