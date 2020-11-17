#include<iostream>
using namespace std;
int main()
{
  int n, c0=0, c1=0, c2=0;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
  {
    a[i] = rand()%3;
    cout<<a[i]<<" ";
  }
  cout<<endl;
  int l=0, m=0, h=n-1, temp;
  while(m<=h)
  {
    if(a[m]==0)
    {
      temp = a[l];
      a[l] = a[m];
      a[m] = temp;
      m++;
      l++;
    }
    else if(a[m]==1) m++;
    else if(a[m]==2)
    {
      temp = a[h];
      a[h] = a[m];
      a[m] = temp;
      h--;
    }
  }
  for(int i=0;i<n;i++) cout<<a[i]<<" ";
  return 0;
}
