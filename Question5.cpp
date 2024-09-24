#include <iostream>
using namespace std;
int main(){
  int p,n;
  float r;
  cout<<"Enter the principal amount: ";
  cin>>p;
  cout<<"Enter the time in year: ";
  cin>>n;
  cout<<"Enter tha rate: ";
  cin>>r;
  cout<<"The SI is "<<(p*r*n)/100;
  return 0;
}
