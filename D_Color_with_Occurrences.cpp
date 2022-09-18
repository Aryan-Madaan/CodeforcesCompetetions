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

bool comp(pair <string,int> &s1 ,pair <string,int> &s2)
{
    if(s1.first.size()==s2.first.size()) return s1<s2;
        return s1.first.size()>s2.first.size();
}


void solve()
{
    int tt=1;
    cin >> tt;
    while(tt--)
    {
        string str;
        cin >> str;
        int n;
        cin >> n;
        vector< pair<string,int> > ss(n);
        vector < pair<int,int> > v;
        rep(i,n)
        {
            cin>> ss[i].first;
            ss[i].second = i;
        }
        sort(ss.begin(),ss.end(),comp);
        int curr = 0, prev =-1,s =0;
        while(s<str.size())
        {
            int index = -1, posstr = -1, posstring = -1;
            while(curr>prev)
            {
                rep(j,ss.size())
                {
                    string test = str.substr(curr,ss[j].first.size());
                    if(test == ss[j].first)
                    {
                        int idx = curr+ ss[j].first.size() - 1;
                        if(idx>index)
                        {
                            index = idx;
                            posstr = curr;
                            posstring = ss[j].second;
                        }
                        break;
                    }
                }
                curr--;
            }
            if(index == -1)
            {
                cout << -1 << endl;
                break;
            }
            else
            {
                prev = posstr;
                curr= index+1;
                s =  curr;
                v.push_back(mp(posstring+1,posstr+1));
            }
            if(s == str.size())
        {
            cout << v.size() << endl;
            rep(k, v.size())
            {
                cout << v[k].first << " " << v[k].second <<endl;
            }
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


