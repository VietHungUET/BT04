#include <bits/stdc++.h>

using namespace std;

string balancedSums(int arr[],const int& n) {
int a[100];
int b[100];
a[-1]=0;
for(int i=0;i<n;i++)
{
   a[i]=a[i-1]+arr[i];
}

b[n]=0;
for(int i=n-1;i>=0;i--)
{
    b[i]=b[i+1]+arr[i];
}
for(int i=0;i<n;i++)
{
    if(a[i]==b[i]) {return "YES";}
}
return "NO";
}

int main()
{  int a[100];
    int t;
    cin>>t;
    while(t--)
    {int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<balancedSums(a,n);
    }
}


