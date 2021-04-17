#include<iostream>
#include<map>
#include<algorithm>
using namespace std;
void solve1()
{
  map<int,int> mm;
  int n;
  cin>>n;
  int a, no;
  for(int i=0;i<n;i++)
  {
    cin>>a;
    if(mm.find(a)!=mm.end()) mm[a] = mm[a] + 1;
    else mm[a]=1;
    if(mm[a]==2) no = a;
  }
  cout<<no<<endl;
}
void solve2()
{
  int n, no;
  cin>>n;
  int a[n], b[n]={0};
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
    if(b[a[i]]==1) no=a[i];
    b[a[i]] = 1;
  }
  cout<<no<<endl;
}
void solve3()               //not working
{
  int n, no;
  cin>>n;
  int a[n], b[n]={0};
  for(int i=0;i<n;i++) cin>>a[i];
  for(int i=0;i<n;i++)
  {
    a[a[i]] = a[a[i]] + (n+1);
    if(a[a[i]]-2*(n+1) >= 0) no = a[a[i]]-2*(n+1);
  }
  cout<<no<<endl;
}
int main()
{
  int t;
  cin>>t;
  while(t--) solve2();
  return 0;
}
