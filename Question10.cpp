#include <iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter the number: ";
  cin>>n;
  if(n==0){
    cout<<"It is neither even nor odd";
  }
  else if(n%2==0){
    cout<<"It is an even number";
  }
  else{
    cout<<"It is an odd number";
  }
  return 0;
}
