#include<bits/stdc++.h>//1154A
using namespace std;
int main()
{
    int a[4];
    for(int i=0; i<4; i++)
    {
        cin>>a[i];
    }
    sort(a,a+4);
    cout<<a[3]-a[2]<<" "<<a[3]-a[1]<<" "<<a[3]-a[0]<<endl;

    return 0;
    
}