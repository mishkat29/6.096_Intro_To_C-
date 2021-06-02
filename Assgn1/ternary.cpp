#include<iostream>
using namespace std;
int main(){
    int N;
    cin >> N;
    float result = (N%5==0) && (N>0) ? (N/5) : -1;
    cout <<result<<"\n";
}