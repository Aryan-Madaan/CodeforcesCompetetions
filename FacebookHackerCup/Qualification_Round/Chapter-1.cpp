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
        string s;
        cin >> s;
        int vow =0,con=0;
        unordered_map<char,int>ma;
        rep(i,26)
        {
            ma['A'+i]=0;
        }
        rep(i,s.size())
        {
            ma[s[i]]++;
            if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
            {
                vow++;
            }
            else
            {
                con++;
            }
        }
        int max_count1 =0,max_count2=0;
        rep(i,26)
        {
           if('A'+i=='A'||'A'+i=='E'||'A'+i=='I'||'A'+i=='O'||'A'+i=='U')
            {
                if(ma['A'+i]>max_count1)
                {
                    max_count1=ma['A'+i];
                }
            }
            else
            {
                if(ma['A'+i]>max_count2)
                {
                    max_count2=ma['A'+i];
                }
            } 
        }
        cout <<"Case #" <<  p << ": "<< min(2*(vow-max_count1)+con,2*(con-max_count2)+vow) <<endl;
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


