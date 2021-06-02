#include<iostream>
using namespace std;
int main ()
 {
    short number ;
    cout << " Enter a number : ";
    cin >> number ;
    if(number < 0){
        cout<<"invalid";
        return 1;
    }
    else if(number >20){
        cout<<"enter a smaller number";
        return 1;
    }
    else{
        cout << "The factorial of " << number << " is ";
        int accumulator =1;
        for (; number > 0; number --){
            accumulator *= number;
        }
            cout << accumulator << ".\n";
            return 0;
    }
}