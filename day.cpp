#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define MOD 1000000007
#define f(i,a,n) for(lli i = a; i < n; i++)
#define pb push_back
#define mp make_pair

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);

// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
    //this code is calculate your numerology number of your date of birth
    //intput format is dd-mm-year
    cout<<"Enter your date of birth (date of birth format is mm-dd-year) : ";
    string str;
    getline(cin,str);
    cout<<endl;
    vector<int>v;
    int n = str.size();
    for(int i=0;i<n;i++)
    {
    	if(str[i]-'0'>0 and str[i]-'0'<26)
    		v.push_back(str[i]-'0');
    }

    n = v.size();
    if(n!=8)
    	cout<<"Wrong input"<<endl;

    else
    {
    	int total = 0;
    	for(int i=0;i<2;i++)
    		total += v[i];

    	while(total > 9)
    {
    	vector<int>vi;
    	while(total>0)
    	{
    		int m = total%10;
    		vi.push_back(m);
    		total=total/10;
    	}

    	for(int i=0;i<vi.size();i++)
    	{
    		total+=vi[i];
    	}
    }
    cout<<"Your numerology no of your day  is : ";
    cout<<total<<endl;
    }


return 0;
}
