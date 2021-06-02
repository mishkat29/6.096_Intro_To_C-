#include <iostream>
using namespace std;

int main ()
{
  int N;
  cout << "Enter N\n";
  cin>>N;
  for(int i=2;N>0;++i){
    bool isprime = true;
    for(int j=2;j<i;++j){
      if(i%j==0){
        isprime = false;
        break;
      }
    }
  if(isprime){
    --N;
    cout<<i<<"\n";
  }
  }
}