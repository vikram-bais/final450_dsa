#include<iostream>
using namespace std;
int main()
{
  int a[] = {1,2,3,4,5,6,7}, temp, n=7;
  cout<<"Before"<<endl;
  for(int i=0;i<n;i++) cout<<a[i]<<" ";
  cout<<endl;
  for(int i=0;i<n/2;i++)
  {
    temp = a[n-1-i];
    a[n-1-i] = a[i];
    a[i] = temp;
  }
  cout<<"After"<<endl;
  for(int i=0;i<n;i++) cout<<a[i]<<" ";
  cout<<endl;
  return 0;
}
