#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#include<math.h>
bool prime(ll x)
{
    if(x<2)
    return false;

    if(x<=3)
    {
        return true;
    }

    if(x%2==0)
    return false;

    for(int i=3;i<=sqrt(x);i=i+2)
    {
        if(x%i==0)
        return false;
    }

    return true;
}
int main()
{
    ll t,x,m,k;
    cin>>t;
    //vector<ll> v;
  
      for(int i=0;i<t;i++)
      {
        
        cin>>k;
        
        
        x=sqrt(k);
         m=prime(x);
        if((x*x==k)&&m==1)
        {
            cout<<"YES"<<endl;
        } 
        else
        {
            cout<<"NO"<<endl;
        }
      
      }   
}