/*
 *  Code by Anish Kasegaonkar
 *  Created: 19-08-2021 at 17:09:56
 *
 *  Template and snippets by Anish Kasegaonkar
 *  Codeforces: Anish_aak   Atcoder: Anish_aak  Codechef: anish_ak
 *  Github: https://github.com/Anish-aak (code/snippet repository soon!)
 */

#include <bits/stdc++.h>
using namespace std;

// Risky defines
#define int             long long
#define double          long double
#define endl            '\n'
#define vector          deque

#define pb              push_back
#define popb            pop_back
#define popf            pop_front
#define mp              make_pair
#define ff              first
#define ss              second
#define lb              lower_bound
#define ub              upper_bound
#define gri             greater<int>
#define sq(t)           (t)*(t)
#define all(t)          (t).begin(), (t).end()
#define mid(l,r)        (l) + ((r)-(l))/2
#define max3(a,b,c)     max((a), max((b), (c)))
#define max4(a,b,c,d)   max((a), max((b), max((c), (d))))
#define min3(a,b,c)     min((a), min((b), (c)))
#define min4(a,b,c,d)   min((a), min((b), min((c), (d))))
#define rep(i,j)        for(int i = 0; i < (j); ++i)
#define rrep(i,j)        for(int i = (j)-1; i >= 0; --i)
#define maxin(t)        *max_element((t).begin(), (t).end())
#define minin(t)        *min_element((t).begin(), (t).end())
#define sz(t)           (int) (t).size()
#define getunique(v)    {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
#define modd(x,y)       ((x)%(y)<0 ? (x)%(y)+y : (x)%(y))

typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pair<int, int> > vpii;
typedef vector<vector<int> > vvi;
typedef deque<int> di;
typedef deque<pair<int, int> > dpii;
typedef deque<deque<int> > ddi;
typedef map<int, int> mii;
typedef priority_queue<int> maxpq;
typedef priority_queue<int, vector<int>, greater<int> > minpq;
typedef unordered_map<int, int> umapii;
typedef unordered_map<char, int> umapci;
typedef unordered_set<int> useti;
typedef unordered_set<pair<int, int> > usetpii;
typedef set<int> si;

mt19937_64 rng(std::chrono::steady_clock::now().time_since_epoch().count());
// mt19937_64 rng(61378913);
/* usage - just do rng() */

const char nl = '\n';
const double eps = 1e-6, pi = acos(-1);
const int N = 1e5, mod = 1e9 + 7, inf = 1e18;

void solve()
{
    string s;
    cin>>s;
    int ar[26]={}, n = s.length();
    priority_queue<char> pq;
    int fl[26]={};
    rep(i, n)
    {
        ar[s[i]-'a']++;
        if(fl[s[i]-'a']==0) pq.push(s[i]);
        fl[s[i]-'a']=1;
    }
    
    string temp="";
    // rrep(i, n)
    // {
    //     if(ar[s[i]-'a']>0)
    //     {
    //         bool fl = 0;
    //         // To check if s[i] is the biggest char till i
    //         for(char t = s[i]+1; t<='z'; t++)
    //         {
    //             if(ar[t-'a']>0)
    //             {
    //                 fl = 1;
    //                 break;
    //             }
    //         }
    //         if(!fl)
    //         {
    //             temp.pb(s[i]);
    //             ar[s[i]-'a']=0;
    //         }
    //         else if(ar[s[i]-'a']==1)
    //         {
    //             temp.pb(s[i]);
    //             ar[s[i]-'a']=0;
    //         }
    //     }
        
    // }


    bool chk = 0;
    char tempo, lastt = pq.top();
    rrep(i, n)
    {
        if(fl[s[i]-'a']==-1)
            continue;
        if(chk && !pq.empty() && s[i]==pq.top())
        {
            // cout<<'A';
            chk = 0;
        }
        if(chk && s[i]<=tempo)
        {
            // cout<<'B';
            tempo = s[i];
            temp.pb(s[i]);
            fl[s[i]-'a']=0;
            ar[s[i]-'a']--;
            continue;
        }
        if(chk && s[i]>=tempo)
        {
            // cout<<'C';
            continue;
        }
        if(!pq.empty() && s[i]==pq.top())
        {
            // cout<<'E';
            pq.pop();
            temp.pb(s[i]);
            ar[s[i]-'a']--;
            chk = 1;
            tempo = s[i];
            while(s[i]==lastt && i>=0 && s[--i]==tempo);
            if(i==0 && s[i]==tempo)
                break;
            i++;
            if(tempo!=lastt)i--;
            continue;
        }
        if(ar[s[i]-'a']==1 && fl[s[i]-'a']==1)
        {
            // cout<<'D'<<' '<<s[i]<<endl;
            temp.pb(s[i]);
            ar[s[i]-'a']--;
            fl[s[i]-'a']=-1;
            continue;
        }
        // cout<<"IDHAR?"<<' '<<s[i]<<endl;
        ar[s[i]-'a']--;
    }
    reverse(all(temp));
    cout<<temp<<endl;
}

int32_t main()
{
    #ifdef aak_local
        auto begin = std::chrono::high_resolution_clock::now();
        freopen("/Users/aak/Desktop/C:C++/Competitive/input.txt","r",stdin);
        freopen("/Users/aak/Desktop/C:C++/Competitive/output.txt","w",stdout);
        #define dbg(a) cerr << '\n'; cerr << #a << ": "; _print(a); cerr << '\n' << '\n';
    #else
        #define dbg(a)
    #endif
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cout.precision(numeric_limits<double>::max_digits10);
    cout << setprecision(15) << fixed;
    int tt = 1;
    cin >> tt;
    for(int i = 1; i <= tt; ++i)
    {
        // cout << "Case #" << i << ": ";
        solve();
    }
    #ifdef aak_local
       auto end = std::chrono::high_resolution_clock::now();
       cerr << setprecision(4) << fixed;
       cerr << "Execution time: " << std::chrono::duration_cast<std::chrono::duration<double>>(end - begin).count() << " seconds" << endl;
    #endif
    return 0;
}