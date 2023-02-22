#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int a[1000];
int b[1000];
int c[1000];

int main() {

    int n,result;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        c[a[i]]++;
    }
    for(int i=1;i<=n+1;i++)
    {
       cin>>b[i];

        c[b[i]]--;

        if(c[b[i]]<0) {result=b[i];}
    }
    cout<<result;
    return 0;
}
