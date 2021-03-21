#include<bits/stdc++.h>
#include<map>
#include<iterator>
using namespace std;
int f(int n)
{
    if(n>1)
    {
        return n*f(n-1);
    }
    else {
        return 1;
    }
}
int main()
{    
    int t;
    cin>>t;
    int x=f(t);
    cout<<x;
    return 0;

}