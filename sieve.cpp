#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb   push_back()
#define yes   cout<<"YES"<<endl;
#define no   cout<<"NO"<<endl;
#define all(x) ((x).begin(), (x).end());
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int mx=1e7+123;
bool is_prime[mx];

void  primeGen(ll n)
{
    vector<int>prime;
    memset(is_prime,1,sizeof(is_prime));
    is_prime[1]=0;
    for(int i=3;i<=n;i+=2)
    {
          if( is_prime[i]==1)
          {
            for(int j=i+i;j<=n;j+=i)
            {
                is_prime[j]=0;
            }
          }
    }
         prime.push_back(2);
          for(int i=3;i<=n;i+=2)
          {
            if(is_prime[i]==1)
            {
                prime.push_back(i);
            }
          }


          for(int i=0;i<prime.size();i++)
          {
            cout<<prime[i]<<" ";
          }


    
}


int main()
{
    ll n;
    cin>>n;
    primeGen(n);
}