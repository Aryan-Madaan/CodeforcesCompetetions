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

int fun(vector<int> &v,vector<int> &v1,int start,int end,int sum,int rsum,int cnt)
{
    if(sum==rsum)
    return cnt;
    else
    {
        if(v[start]<v1[end])
        {
            return fun(v,v1,start+1,end,sum-1,rsum,cnt+v[start]);
        }
        else if(v[start]==v1[end])
        {
            return min(fun(v,v1,start+1,end,sum-1,rsum,cnt+v[start]),fun(v,v1,start,end+1,sum-1,rsum,cnt+v1[end]));
        }
        else
        {
            return fun(v,v1,start,end+1,sum-1,rsum,cnt+v1[end]);
        }
    }
}


void solve()
{
    int t=1;
    cin >> t;
    while(t--)
    {
        int n,rsum,sum=0,cnt=1;
        cin >> n >> rsum;
        vector<int> v(n,0);
        vector<int> v1,v2;
        rep(i,n)
        {
            cin>>v[i];
            if(!v[i])
            {
                cnt++;
            }
            else
            {
                v1.pb(cnt);
                cnt=1;
            }
            sum+=v[i];
        }
        v1.pb(INT_MAX);
        cnt = 1;
        for(int i =n-1;i>=0;i--)
        {
            if(!v[i])
            {
                cnt++;
            }
            else
            {
                v2.pb(cnt);
                cnt=1;
            }
        }
        v2.pb(INT_MAX);
        // rep(i,v1.size())
        // {
        //     cout << v1[i] <<  " ";
        // }
        // cout << endl;
        // rep(i,v2.size())
        // {
        //     cout << v2[i] <<  " ";
        // }
        // cout <<endl;
        if(sum<rsum)
        cout << -1 << "\n";
        else if(sum==rsum)
        cout << 0 << "\n";
        else
        {
            int start =0,end=n-1;
            cout << fun(v1,v2,0,0,sum,rsum,0) << "\n";
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


