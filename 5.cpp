#include <iostream>
using namespace std;

void solve()
{
  int n, c0=0, c1=0, c2=0;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++) cin>>a[i];
  int l=0, m=n-1, temp, count=0;
  while(l<=m)
  {
    count++;
    if(a[l]<0 && a[m]>=0)
    {
      temp = a[l];
      a[l] = a[m];
      a[m] = temp;
      m--;
      l++;
    }
    else if(a[m]<0) m--;
    else if(a[l]>=0) l++;
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
