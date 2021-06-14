#include <iostream>
using namespace std;

void display(char c = '\n', int count) {
    for(int i = 1; i <= count; ++i) {
        cout << c;
    }
}

int main() {
    int count;
    char a;
    cout <<"Enter the count";
    cin >> count;
    cout <<"Enter the character";
    ccin >> a;

    cout << "No argument passed: ";
    display(a,count); 
    
    return 0;
}
