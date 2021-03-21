#include<bits/stdc++.h>
#include<map>
#include<iterator>
using namespace std;
int main()
{    
 
    int l,t;
    cin>>l>>t;
    while(t--)
    {   
        int h,w;
        cin>>h>>w;
       if(w<l || h<l)
       {
           cout<<"UPLOAD ANOTHER\n";
       }
       else if(w>=l && h>=l)
       {
          if(h==w)
          {
              cout<<"ACCEPTED\n";
          }
          else{ cout<<"CROP IT\n";  }
       }
    }

    return 0;

}