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
        double rs,rh;
        int n;
        cin >> rs >> rh >> n;
        vector< pair<double,double > > v1(n);
        rep(i,n)
        {
            cin >> v1[i].first >> v1[i].second;
        }
        int m;
        cin >> m;
        vector< pair<double,double > > v2(m);
        rep(i,m)
        {
            cin >> v2[i].first >> v2[i].second;
        }
        int count1 = 0, count2 = 0;
        double clos1=INT_MAX,clos2 =INT_MAX,temp=0;
        for(int i = 0;i<n;i++)
        {
            temp = INT_MAX;
            if(sqrt(pow(v1[i].first,2)+pow(v1[i].second,2))<=rs+rh)
            {
                count1++;
            }
            if(sqrt(pow(v1[i].first,2)+pow(v1[i].second,2))>rs)
            {
                temp = (sqrt(pow(v1[i].first,2)+pow(v1[i].second,2))) - rs;
            }
            else
            {
                temp = 0;
            }
            clos1 = min(clos1,temp);
        }
        for(int i = 0;i<m;i++)
        {
            temp = INT_MAX;
            if(sqrt(pow(v2[i].first,2)+pow(v2[i].second,2))<=rs+rh)
            {
                count2++;
            }
            if(sqrt(pow(v2[i].first,2)+pow(v2[i].second,2))>rs)
            {
                temp = (sqrt(pow(v2[i].first,2)+pow(v2[i].second,2))) - rs;
            }
            else
            {
                temp = 0;
            }
            clos2 = min(clos2,temp);
        }
        if(clos1>clos2){
        for(int i = 0;i<m;i++)
        {
            if(sqrt(pow(v2[i].first,2)+pow(v2[i].second,2))<=rs+rh){
            temp = INT_MAX;
            if(sqrt(pow(v2[i].first,2)+pow(v2[i].second,2))>rs)
            {
                temp = (sqrt(pow(v2[i].first,2)+pow(v2[i].second,2))) - rs;
            }
            else
            {
                temp = 0;
            }
            if(temp>clos1)
            {
                count2--;
            }
            }
        }
            cout << "Case #" << p << ": "<<0 << " " << count2 << "\n";
        }
        else
        {
        for(int i = 0;i<n;i++)
        {
            if(sqrt(pow(v1[i].first,2)+pow(v1[i].second,2))<=rs+rh){
            temp = INT_MAX;
            if(sqrt(pow(v1[i].first,2)+pow(v1[i].second,2))>rs)
            {
                temp = (sqrt(pow(v1[i].first,2)+pow(v1[i].second,2))) - rs;
            }
            else
            {
                temp = 0;
            }
            if(temp>clos2)
            {
                count1--;
            }
            }
        }

            cout << "Case #" << p << ": "<<count1 << " " << 0 << "\n";
        }
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


