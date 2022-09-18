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

vector<int> an(100005);
int ans = 0;

void sea(vector< pair<int,int>  > &v,int temp,int i)
{
    int j = i+1;
    temp++;
    if(temp>=v[i].second)
    {
        for(;j<v.size();j++)
        {
            if((v[j].first-v[i].first)%2==1)
            {
                v[j].second = temp; 
                sea(v,temp,j);
                break;
            }
        }
        ans = max(ans,temp);
    }
}


void solve()
{
    int t=1;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        ans = 0;
        vector< vector< pair<int,int>  > > v(n);
        int curr_height = 0,temp = 0;
        rep(i,n)
        {
            cin >> temp;
            v[temp-1].push_back(mp(i,0));
        }
        rep(i,n)
        {
            ans = 0;
            if(v[i].size()!=0)
            sea(v[i],0,0);
            an[i] = ans;
        }
        rep(i,n)
        {
            cout << an[i] << " ";
        }
        cout << endl;
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


