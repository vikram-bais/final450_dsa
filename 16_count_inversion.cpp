#include<iostream>
using namespace std;
int merge(int a[],int l,int m,int r)
{
  int t[r-l+1];
  int c=0;
  int i=l,j=m+1,k=0;
  while(i<=m && j<=r)
  {
    if(a[i]<=a[j])
    {
      t[k]=a[i];
      i++;k++;
    }
    else
    {
      t[k]=a[j];
      if(i<j) c+=m-i+1;
      //cout<<"i "<<a[i]<<", "<<a[j]<<" "<<i<<","<<j<<endl;
      j++;k++;
    }
  }
  while(i<=m)
  {
    t[k]=a[i];
    //cout<<"o "<<a[i]<<", "<<a[j]<<" "<<i<<","<<j<<endl;
    i++;k++;
  }
  while(j<=r)
  {
    t[k]=a[j];
    k++;j++;
  }
  k=0;
  for(int i=l;i<=r;i++,k++) a[i]=t[k];
  //for(int i=l;i<=r;i++) cout<<a[i]<<" ";
  //cout<<endl;
  return c;
}
int merge_sort(int a[], int l,int r)
{
  int ti=0;
  int m=(l+r)/2;
  if(l<m) ti+=merge_sort(a,l,m);
  if(m+1<r) ti+=merge_sort(a,m+1,r);
  ti+=merge(a,l,m,r);
  return ti;
}
int main()
{
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++) cin>>a[i];
  int tot=merge_sort(a,0,n-1);
  //for(int i=0;i<n;i++) cout<<a[i]<<" ";
  //cout<<endl;
  cout<<tot<<endl;
  return 0;
}
