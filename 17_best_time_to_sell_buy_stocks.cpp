#include<iostream>
#include<algorithm>
using namespace std;
int solve(int a[],int i,int j,int k)
{
  int c=0;
  while(i<j)
  {
    if(a[i]+a[j]<k) i++;
    else if(a[i]+a[j]>k) j--;
    else
    {
      c++;
      c+=solve(a,i+1,j,k);
      c+=solve(a,i,j-1,k);
      cout<<c<<" ";
    }
  }
  return c;
}
int main()
{
  int n,k;
  cin>>n>>k;
  int a[n];
  for(int i=0;i<n;i++) cin>>a[i];
  sort(a,a+n);
  cout<<solve(a,0,n-1,k);
  return 0;
}
