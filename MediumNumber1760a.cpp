#include<bits/stdc++.h>//1760A
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a[3];
        cin>>a[0]>>a[1]>>a[2];
        sort(a,a+3);
        cout<<a[1]<<endl;
    }
}