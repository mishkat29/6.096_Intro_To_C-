#include <iostream>
using namespace std;
/* int printarray(int *arr, int arr_len)*/
void printarray(const int arr[], const int arr_len){
    for(int i=0;i<arr_len;i++){
        if(i<arr_len-1){
            cout<<arr[i]<<",";
        }
        else{
            cout<<arr[i];
        }
    }
}
int main(){
    int arr_len;
    int arr[arr_len];
    
    cout << "enter the number of integers to print- ";
    cin >> arr_len;
    for(int j=0;j<arr_len;j++){
        cout << "enter "<<j<<" element ";
        cin >>arr[j];
    }
    printarray(arr,arr_len);
}