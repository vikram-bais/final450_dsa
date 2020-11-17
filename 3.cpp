#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++) a[i] = rand()%20+1;
  sort(a, a+n);
  for(int i=0;i<n;i++) cout<<a[i]<<" ";
  cout<<endl;
  int k;
  cin>>k;
  cout<<a[k-1]<<", "<<a[n-k];
  return 0;
}
