#include <iostream>
using namespace std;
/*int sum(int arr[],int arr_len)*/
int sum(int *arr,int arr_len){
    int arr_sum=0;
    for(int i=0; i<arr_len;i++){
        arr_sum += arr[i];
    }
    return arr_sum;
}
int main(){
    int arr_len;
    int arr[arr_len];
    
    cout << "enter the number of integers you want to add- ";
    cin >> arr_len;
    for(int j=0;j<arr_len;j++){
        cout << "enter "<<j<<" element ";
        cin >>arr[j];
    }
    cout <<sum(arr,arr_len);
}