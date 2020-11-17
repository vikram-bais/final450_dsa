#include<iostream>
using namespace std;
void solve()
{
  int x, y;
  cin>>x>>y;
  int a[x], b[y], c[x+y], l=0;
  for(int i=0;i<x;i++) cin>>a[i];
  for(int i=0;i<y;i++) cin>>b[i];
  int i=0, j=0;
  while(1)
  {
    if(i>=x && j<y)
    {
      c[l] = b[j];
      j++;
      l++;
    }
    else if(j>=y && i<x)
    {
      c[l] = a[i];
      i++;
      l++;
    }
    else if(i>=x && j>=y) break;
    else
    {
      if(a[i]<b[j])
      {
        c[l] = a[i];
        i++;
        l++;
      }
      else if(b[j]<a[i])
      {
        c[l] = b[j];
        j++;
        l++;
      }
      else
      {
        c[l] = a[i];
        l++;
        i++;
        j++;
      }
    }
  }
  cout<<l<<endl;
}
int main()
{
  int t;
  cin>>t;
  while(t--) solve();
  return 0;
}
