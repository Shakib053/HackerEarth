#include<bits/stdc++.h>
#include<map>
#include<iterator>
using namespace std;
int main()
{    
    int n;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='H' && s[i+1]=='H')
        {
            cout<<"NO\n";
            exit(0);
        }
        if(s[i]=='.')
        {
            s[i]='B';
        }
    }
    cout<<"YES\n";
    cout<<s;
    return 0;

}