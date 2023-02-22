#include<bits/stdc++.h>
using namespace std;
string doixung(string s)
{  string r="";
   for(int i=s.size()-1;i>=0;i--)
   {
       r+=s[i];

   }
 return r;
}

int main()
{
    int t,n=0;
    cin>>t;
    string s[100];
    string r[100];
    for(int i=1; i<=t; i++)
    {
        cin>>s[i];
        r[i]= doixung(s[i]);
        n++;
        for(int j=1; j<=n; j++)
        {
            if(s[i]==r[j])
            {    string p=s[i];
                cout<<s[i].size()<<" "<<p[(p.size()-1)/2];
            }
        }

    }

}
