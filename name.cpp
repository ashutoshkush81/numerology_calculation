//calculation of numerology number of your name is called name number
/* Your name number is the sum total value of all the individual alphabets’ numerical values.*/
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
    //declaring the neurological number for each alphabet
    
    int arr[]={1,2,3,4,5,8,3,5,1,1,2,3,4,5,7,8,1,2,3,4,6,6,6,5,1,7};
    //taking the input from the user
    cout<<"Enter your name : ";
    string str;
    getline(cin,str);
    cout<<endl;
    //converting the string into the lower case
    transform(str.begin(), str.end(), str.begin(), ::tolower); 
    // cout<<str<<endl;
    //calculating the neurological number for string inter by the user 
    int n = str.size();
    int total = 0 ;
    for(int i=0;i<n;i++)
    {

    	if(str[i]==' ')
    		total+=0;
    	else if(str[i]-'a'>25 or str[i]-'a'<0)
    		total+=0;
    	else
    		total +=arr[str[i]-'a'];
    }

    // cout<<total<<endl;

    while(total > 9)
    {
    	vector<int>v;
    	while(total>0)
    	{
    		int m = total%10;
    		v.push_back(m);
    		total=total/10;
    	}

    	for(int i=0;i<v.size();i++)
    	{
    		total+=v[i];
    	}
    }
    cout<<"Your numerology number of your name is : ";
    cout<<total<<endl;


return 0;
}
