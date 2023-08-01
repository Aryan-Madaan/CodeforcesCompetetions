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
        int n,e;
        cin >> n >>e;
        deque< set< pair<int,int> > >d(501);
        for(int i =0;i<n;i++)
        {
            int x,y,c;
            cin >> x >> y >> c;
            d[y].insert(make_pair(x,c));
        }
        long curr = 0,lastpos = 0,temp=0;
        bool f = 1;
        for(int i =500;i>=0;i--)
        {
            if(d[i].size()>0)
            {
                temp = 0;
                set<pair<int,int> >::iterator it = d[i].begin();
                while(it!=d[i].end())
                {
                    if(f){
                        if(lastpos<=it->first)
                        {
                            curr+=it->second;
                        }
                        else
                        {
                            temp += it->second;
                        }
                        lastpos = it->first;
                    }
                    else
                    {
                        if(lastpos<=it->first)
                        {
                            temp+=it->second;
                        }
                        else
                        {
                            curr += it->second;
                        }
                    }
                    it++;
                }
                if(f)
                {
                    it = d[i].begin();
                    if(temp-e>0)
                    {
                        curr+=(temp-e);
                        lastpos = it->first;
                        f=0;
                    }
                }
                else
                {
                    it = d[i].end();
                    it--;
                    if(temp-e>0)
                    {
                        curr+=(temp-e);
                        lastpos = it->first;
                        f=1;
                    }
                }
            }
        }
        cout << "Case #" << p << ": "  << curr <<"\n";
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


