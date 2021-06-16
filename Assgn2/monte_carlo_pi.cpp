#include<iostream>
#include<cstdlib>
#include<ctime>
#include<cmath>
using namespace std;
double computepi(const int n){
    srand(time(0));
    double x,y;
    double dartsinRad = 0;
    for(int i=0;i<n;i++){
        x = rand()/(double)RAND_MAX;
        y = rand()/(double)RAND_MAX;
        if(sqrt((x*x)+(y*y)) < 1){
            dartsinRad++;
        }
    }
    return dartsinRad/static_cast<double>(n)*4;
}
int main(){
    int n;
    cout << "enter the value of n: ";
    cin >> n;
    cout << computepi(n);
    return 0;
}