#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
   int n;
   cin>>n;
   int ans=0;
   vector<int> vec;
   vector<int> cnt(5000001,0);
   vector<int> multiple(5000001,0);
   for(int i=0;i<n;i++)
   {
       int x;cin>>x;
       vec.push_back(x);
       cnt[x]++;
   }
   for(int i=0;i<500;i++)
   {
       for(int j=i;j<=500;j+=i)
       {
           multiple[i] += cnt[j];
       }
   }
   vector<int> dp(5000001,0);
   for(int i=5000000;i>0;i--)
   {
       dp[i]=multiple[i]*i;
       for(int j=2*i;j<=5000000;j+=i)
       dp[i]=max(dp[i],dp[i]+(multiple[i]-multiple[j]));
   }
   cout<<ans<<endl;
}

//                                               Created by Aryan Madaan.
//---------------------------------------------------------------------------------------------------
// #include <bits/stdc++.h>

// #include <stdio.h>
// using namespace std;
// #define Expresso std::ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
// #define mod 1000000007
// typedef long long ll;
// typedef pair<int, int> ii;
// typedef vector<ii> vii;
// typedef vector<int> vi;
// typedef long double ld;
// typedef unsigned long long ull;
// #define mp make_pair
// #define ff first
// #define ss second
// #define pb(v) push_back(v)
// #define INF 2e9
// #define rep(i,n) for(int i =0;i<n;i++)
// #define endl '\n'
// const double eps = 1e-6, pi = acos(-1);
// const char nl = '\n';

// int gcd(int a, int b)
// {
//     if (b == 0)
//         return a;
//     return gcd(b, a % b);
// }
// int randomize()
// {
// return (rand() % 1000);
// }


// //---------------------------------------------------------------------------------------------------




// void solve()
// {
//     int t=1;
//     cin >> t;
//     while(t--)
//     {
//         int n;
//         cin >> n;
//     }
// }
// /*
// */





// //---------------------------------------------------------------------------------------------------
// int main() {
//    cout.precision(numeric_limits<double>::max_digits10);
//        cout << setprecision(15) << fixed;
//     Expresso
//     solve();
//     return 0;
// }

