#include<iostream>
using namespace std;
void solve()
{
  int n, k;
  cin>>k>>n;
  int a[n];
  cin>>a[0];
  int mx=a[0], mn=a[0], mxp=0, mnp=0;
  for(int i=1;i<n;i++)
  {
    cin>>a[i];
    if(a[i]>mx) mx=a[i];
    if(a[i]<mn) mn=a[i];
  }
  if(mx-k<0) mx=mx+k;
  else mx = mx - k;
  mn = mn + k;
  if(mx<mn)
  {
    int temp = mx;
    mx = mn;
    mn = temp;
  }
  for(int i=0;i<n;i++)
  {
    if((a[i]-k)<mn) a[i] = a[i] + k;
    else a[i] = a[i] - k;
  }
  cout<<abs(mx-mn)<<endl;
}
int main()
{
  int t;
  cin>>t;
  while(t--) solve();
  return 0;
}
