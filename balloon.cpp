#include<bits/stdc++.h>
#include<map>
#include<iterator>
using namespace std;
int main()
{    
    int t;
    cin>>t;
    while(t--)
    {
        int p,q;
        cin>>p>>q;
        int n;
        cin>>n;
        int x[n],y[n],mn=0,mx=0;
        for(int i=0;i<n;i++)
        {
            cin>>x[i]>>y[i];
            mx=mx+((x[i]*p)+(y[i]*q));
            mn=mn+((x[i]*q)+(y[i]*p));
        }
        cout<<min(mx,mn)<<endl;
    }
    
    return 0;

}