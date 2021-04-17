#include<iostream>
using namespace std;
void solve()
{
  int n, k;
  cin>>n>>k;
  int a[n];
  for(int i=0;i<n;i++) cin>>a[i];
  int mx=a[0], tm=a[0];
  for(int i=1;i<n;i++)
  {
    tm+=a[i];
    if(tm>=k)
    {
      e=i;
      d = max(s, e-s);
      s=i+1;
    }
    if(tm<0)
    {
      tm=0;
      s=i;
    }
  }
  cout<<mx<<endl;
}
int main()
{
  int t;
  cin>>t;
  while(t--) solve();
  return 0;
}
