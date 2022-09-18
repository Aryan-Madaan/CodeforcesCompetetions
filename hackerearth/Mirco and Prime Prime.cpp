#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int MAXN = 1000001;

vector<bool> v(MAXN,1);

void sieve(){
	v[0] = v[1] = 0;
	for(int i =2;i*i<MAXN;i++)
	{
		if(v[i])
		{
			for(int j = i*i;j<MAXN;j+=i)
			v[j]=0;
		}
	}
}

int main() {
	sieve();
	int t;
	cin>>t;
	while(t--)
	{
		set<int> prime;
		int l,r;
		cin >> l >> r;
		bool f =0;
		int count = 0;
		for(int i=l;i<=r;i++)
		{
			if(v[i])
			{
				f =0;
				prime.insert(i);
				if(prime.find(prime.size())!=prime.end())
				{
					f = 1;
				}
			}
			if(f)
			count++;
		}
		cout << count << endl;
	}
}