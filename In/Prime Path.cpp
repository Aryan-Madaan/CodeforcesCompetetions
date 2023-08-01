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

void sieve(vector<bool>&primes,vector<int>&prime)
{
    primes[0]=0;
    primes[1]=0;
    for(int i =2;i<=(int)sqrt(9999);i++)
    {
        if(primes[i])
        {
            for(int k = i*i;k<=9999;k+=i)
            {
                primes[k]=0;
            }
        }
    }
    for(int i = 1000;i<=9999;i++)
    {
        if(primes[i])
        {
            prime.pb(i);
            // cout << i << "\n";
        }
    }
}

bool chk(int pp,int pp1)
{
    string p=to_string(pp),p1=to_string(pp1);
    bool flag =1,flag1 = 1;
    rep(i,p.size())
    {
        if(p[i]!=p1[i])
        {
            if(flag)
            flag =0;
            else
            {
                flag1=0;
            }
        }
    }
    if(flag||flag1)
    return 1;
    return 0;
}

void create_graph(vector<vector<int > >&graph,vector<int> & prime)
{
    rep(i,prime.size())
    {
        for(int k = i+1;k<prime.size();k++)
        {
            // << chk(prime[i],prime[k])  << "\n";
            if(chk(prime[i],prime[k]))
            {
                // cout << prime[i] << " " << prime[k] << "\n";
                graph[prime[i]].pb(prime[k]);
                graph[prime[k]].pb(prime[i]);
            }
        }
    }
}


void solve()
{
    int t=1;
    vector<bool>primes(10000,1);
    vector<int>prime;
    sieve(primes,prime);
    vector<vector<int > >graph(10000);
    
    create_graph(graph,prime);
    cin >> t;
    while(t--)
    {
        int pp1,pp2;
        cin >> pp1 >> pp2;
        vector<bool>vis(10000,0);
        // if(pp1==pp2)
        // cout << 0 << "\n";
        // else
        {
            int ans = 0;
            queue <pair<int,int> >qq;
            qq.push(mp(pp1,0));
            int mindist = INT_MAX;
            while(!qq.empty())
            {
                vis[qq.front().first]=1;
                if(qq.front().first==pp2)
                {
                    mindist=min(mindist,qq.front().second);
                }
                rep(i,graph[qq.front().first].size())
                {
                    if(!vis[graph[qq.front().first][i]])
                    {
                        qq.push(mp(graph[qq.front().first][i],qq.front().second+1));
                    }
                    else if(graph[qq.front().first][i]==pp2)
                    {
                        
                        mindist=min(mindist,qq.front().second+1);
                        // cout << mindist << " ";
                    }
                }
                qq.pop();
            }
            if(mindist!=INT_MAX)
            cout << mindist << "\n";
            else
            {
                cout << "Impossible\n";
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


