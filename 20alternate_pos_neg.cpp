#include<bits/stdc++.h>
using namespace std;
void solve()
{
  int n, c=0; cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
    if(a[i]<0) c++;
  }
  sort(a,a+n);
  for(int i=0;i<n;i++) cout<<a[i]<<" ";
  cout<<endl;
  int i=0, j=c, tm;
  if(a[i]<0)
  {
    if(i%2==0 && a[i]<0) i++;
    if(j%2==1 && a[j]>=0) j++;
    while(i<c && j<n)
    {
      tm = a[i];
      a[i] = a[j];
      a[j] = tm;
      i+=2;j+=2;
    }
  }
  for(int i=0;i<n;i++) cout<<a[i]<<" ";
  cout<<endl;
}
int main()
{
  int t;
  cin>>t;
  while(t--) solve();
  return 0;
}
