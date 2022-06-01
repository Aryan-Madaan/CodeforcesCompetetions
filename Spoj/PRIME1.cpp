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


void simgen(vector<bool>&v,vector<int>&z)
{
    for(int i=2;i<v.size();i++)
    {
        if(v[i])
        {
            z.pb(i);
        for(int j=i*i;j<v.size();j+=i)
        {
            v[j]=0;
        }
        }
    }
}

void solve()
{
    int maxim = 1000000000;
    int limit =floor(sqrt(maxim))+1;
    vector<bool>v(limit,1);
    vector<int>prime;
    simgen(v,prime);
    v[0]=v[1]=0;
    int t=1;
    cin >> t;
    while(t--)
    {
        int m,n;
        cin >> m>>n;
        vector<bool>z(n-m+1,1);
        if(n>limit)
        {
        for(int i=0;i<prime.size()&&prime[i]<n;i++)
        {
            int j =0;
            while((((m+j)/prime[i])<2||(m+j)%prime[i]!=0)&&j<z.size())
            {
                j++;
            }
            for(;j<z.size();j+=prime[i])
            {
                z[j]=0;
            }
        }
        for(int j=0;j<z.size();j++)
        {
            if(z[j]&&(m+j)!=1)
            {
                cout << m+j <<"\n";
            }
        }
        }
        else
        {
            for(int i=0;i<prime.size();i++)
            {
                if(prime[i]>=m&&prime[i]<=n)
                cout << prime[i]<<"\n";
            }
        }
        cout << "\n";
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


