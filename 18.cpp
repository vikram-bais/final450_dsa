#include<bits/stdc++.h>
using namespace std;
int n,k;
int cc[10000][10000]={0};
int tot(int a[], int i, int j)
{

  if(i>=j) return 0;
  if(a[i]+a[j]==k)
  {
    cout<<cc[i][j]<<" "<<i<<" "<<j<<"......."<<endl;
    if(cc[i][j]==1) return tot(a,i+1,j) + tot(a,i,j-1);
    else if(cc[i][j]==0)
    {
      cc[i][j]=1;return tot(a,i+1,j) + tot(a,i,j-1) + 1;
    }
  }
  else if(a[i]+a[j]<k) return tot(a,i,j-1);
  else if(a[i]+a[j]>k) return tot(a,i+1,j);
}
void solve()
{
  cin>>n>>k;
  int a[n];
  for(int i=0;i<n;i++) cin>>a[i];
  sort(a,a+n,greater<int>());
  for(int i=0;i<n;i++) cout<<a[i]<<" ";
  cout<<endl;
  int i=0,j=n-1,c=0;
  c=tot(a,0,n-1);
  cout<<c<<endl;
}
int main()
{
  int t;
  cin>>t;
  while(t--) solve();
  return 0;
}
