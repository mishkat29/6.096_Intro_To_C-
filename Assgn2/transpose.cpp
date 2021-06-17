#include<iostream>
const int length=10;
const int width=10;
using namespace std;
void transpose( int input[][width], int output[][length]){
    for(int i=0;i<width;i++){
        for(int j=0;j<length;j++){
            output[j][i]=input[i][j];
        }
    }
}
int main(){
    int x, y;
    cout <<"\n";
    int array [length][width],row,col;
    cin >>row>>col;
    for(x=0; x<row; x++){
        for(y=0; y<col; y++){
            cout << "\t[" << x <<"]" <<"["<< y <<"]=  ";
            cin >>array[x][y];
        }
    }
    int arr_one[width][length];
    transpose(array,arr_one);
    cout << "\nEntered Matrix: " << endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j <col; j++) {
            cout << " " << array[i][j];
            if (j == col - 1)
                cout << endl << endl;
      }
   }
    cout << "\nTranspose of Matrix: " << endl;
    for (int i = 0; i <col; i++){
        for (int j = 0; j <row; j++){
            cout << " " << arr_one[i][j];
            if (j == row - 1)
                cout << endl << endl;
        }
    }
    return 0;
}