#include<iostream>
using namespace std;
int a[8] = {1,8,7,2,3,6,5,4};
int daq_max(int a[], int s, int e)
{
  //cout<<"aa"<<endl;
  int m = (s+e)/2, max1 = 0, max2 = 0;
  if(e-s == 1) return (a[e]>a[s])? a[e]:a[s];
  else if(e-s == 0) return a[e];
  else
  {
    max1 = daq_max(a, s, m);
    max2 = daq_max(a, m+1, e);
    //cout<<s<<", "<<e<<", max1: "<<max1<<", "<<"max2: "<<max2<<endl;
    return (max1>max2)? max1:max2;
  }
}
int daq_min(int a[], int s, int e)
{
  //cout<<"aa"<<endl;
  int m = (s+e)/2, min1 = 0, min2 = 0;
  if(e-s == 1) return (a[e]>a[s])? a[s]:a[e];
  else if(e-s == 0) return a[e];
  else
  {
    min1 = daq_min(a, s, m);
    min2 = daq_min(a, m+1, e);
    //cout<<s<<", "<<e<<", min1: "<<min1<<", "<<"min2: "<<min2<<endl;
    return (min1>min2)? min2:min1;
  }
}
int main()
{
  int s=0, e=7;
  cout<<"Max value: "<<daq_max(a, s, e)<<endl;
  cout<<"Min value: "<<daq_min(a, s, e)<<endl;
  return 0;
}
