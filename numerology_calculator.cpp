//some compiler doesn't support the getline fuction
//please take care of this
//instead use the string function only , the ur aren't suppose to inter the space between the your name , date of birth etc...
#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define MOD 1000000007
#define f(i,a,n) for(lli i = a; i < n; i++)
#define pb push_back
#define mp make_pair

void name()
{
    cout<<"calculation of numerology number of your name is called name number\nEnter your name"<<endl;
    int arr[]={1,2,3,4,5,8,3,5,1,1,2,3,4,5,7,8,1,2,3,4,6,6,6,5,1,7};
    string str;
    getline(cin,str);
//    cin>>str;
    cout<<endl;
    //converting the string into the lower case
    transform(str.begin(), str.end(), str.begin(), ::tolower);
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
    cout<<"Your name number is : ";
    cout<<total<<endl;
}

void date_of_birth()
{
    cout<<"calculation of numerology number of your date of birth is also called the Life number or Life path number\nEnter your date of birth : "<<endl;
    string str;
    getline(cin,str);
//    cin>>str;
    cout<<endl;
    vector<int>v;
    int n = str.size();
    for(int i=0;i<n;i++)
    {
        if(str[i]-'0'>=0 and str[i]-'0'<26)
            v.push_back(str[i]-'0');
    }

    n = v.size();
    if(n!=8)
        cout<<"Wrong input"<<endl;

    else
    {
        int total = 0;
        for(int i=0;i<n;i++)
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
        cout<<"Your life number is : ";
        cout<<total<<endl;
    }

}

void day()
{
    cout<<"Day Number is important as it defines your chief characteristics\nEnter your date of birth (date of birth format is mm-dd-year)  "<<endl;
    string str;
    getline(cin,str);
//    cin>>str;
    cout<<endl;
    vector<int>v;
    int n = str.size();
    for(int i=0;i<n;i++)
    {
        if(str[i]-'0'>=0 and str[i]-'0'<26)
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
        cout<<"Your day number is : ";
        cout<<total<<endl;
    }
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout<<"       Hello !!!!      "<<endl;
    cout<<"This is numerolgy calculator "<<endl;
    int t = 1;
    while(t)
    {
        cout<<"1.Numerology calculator for your name "<<endl;
        cout<<"2.Numerology calculator for your date of birth "<<endl;
        cout<<"3.Numerology calculator for your day "<<endl;
        cout<<"4.Stop calculator "<<endl;
        cout<<"Enter your choice : "<<endl;
        int choice;
        cin>>choice;
        switch (choice)
        {
            case 1:
            {
                name();
                break;
            }
            case 2:
            {
                date_of_birth();
                break;
            }
            case 3:
            {
                day();
                break;
            }
            case 4:
            {
                t = 0;
                break;
            }
            default:
            {
                cout<<"Wrong choice , Please Enter again!!!"<<endl;
                break;
            }


        }

    }
    cout<<"Thank You for using the numerology calculator "<<endl;
    return 0;
}
