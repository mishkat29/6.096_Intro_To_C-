#include <iostream>
using namespace std;

// defining the default arguments
void display(char c = '\n', int count = 3) {
    for(int i = 1; i <= count; ++i) {
        cout << c;
    }
}

int main() {
    int count = 5;

    cout << "No argument passed: ";
    // *, 3 will be parameters
    display('z',7); 
    


    return 0;
}