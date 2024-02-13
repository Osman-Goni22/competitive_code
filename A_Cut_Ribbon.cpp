
#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,a,b,c;
   cin>>n>>a>>b>>c;
   vector<int> v;
  
  int coin[4][n+1];

  for(int i=0;i<=3;i++)
  {
     coin[i][0]=0;
  }


   v.push_back(a);
   v.push_back(b);
  v.push_back(c);

  for(int i=0;i<3;i++)
  {
    for(int j=0;j<=n;j++)
    {
       if(v[i]>j)
       {
        coin[i][j]=coin[i-1][j];
       }
       else
       {
         coin[i][j]=max(coin[i-1][j],1+coin[i][j-v[i]]);
       }
    }
  }


 for(int i=0;i<3;i++)
 {
    for(int j=0;j<=n;j++)
    {
        cout<<coin[i][j]<<" ";
    }

    cout<<endl;
 }
   
}
