#include<iostream>
using namespace std;
void swap(int *a, int *b){
    int temp =*a;
    *a = *b;
    *b= temp;
}
int main(){
    int a =7;
    int b =8;
    int *x=&a;
    int *y=&b;
    swap(*x,*y);
    cout << a <<" "<<b;
}