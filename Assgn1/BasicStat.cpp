#include <iostream>
#include <string>
using namespace std;
int main()
{
  int N;
  cout << "Enter N\n";
  cin >> N;
  int a;
  cout <<"Enter first number\n";
  cin >> a;
  int acc = a;
  int maxval = a;
  int minval = a;
  for(int i=1;i<N;++i){
      int k;
      cout <<"Enter your number\n";
      cin >> k;
      acc+=k;
      if(k < minval){
          minval=k;
      }
      if(k > maxval){
          maxval=k;
      }
    }
double mean = acc/N;
cout <<"mean is "<<mean<<"\n";
cout <<"max is "<<maxval<<"\n";
cout <<"min is "<<minval<<"\n";
int range = maxval-minval;
cout <<"range is "<<range<<"\n";
}
