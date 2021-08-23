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
        cin >>n;
        vector<int>arr(n);
        rep(i,n)
        {
            cin >> arr[i];
        }
        bool f=1;
        int minpos=0,temp=INT_MAX,temp1=-1,maxpos=0;
        rep(i,n)
        {
            if(arr[i]<=temp)
            {minpos=i;
            temp = arr[i];
            }
        }
        for(int i =n-1;i>=0;i--)
        {
            if(arr[i]>=temp1)
            {maxpos=i;
            temp1 = arr[i];
            }
        }
        if(minpos==1||maxpos==n-2)
        f=0;
        if(f)
        rep(i,1000)
        rep(i,n-3)
        {
            if(arr[i]+arr[i+2]>arr[i+1])
            {
                if(arr[i]>arr[i+2])
                {
                    int x =arr[i];
                    arr[i] =arr[i+2];
                    arr[i+2]=x;
                }
            }
        }
        rep(i,n-1)
        {
            if(arr[i+1]<arr[i])
            f=0;
        }
        if(f)
        cout <<"YES\n";
        else
        cout << "NO\n";
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


