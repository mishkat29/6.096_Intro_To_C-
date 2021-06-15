#include <iostream>
using namespace std;
int sum(int *arr,int arr_len){
    int arr_sum=0;
    return arr_len== 0 ? 0 : arr[0] + sum ( arr+ 1 ,arr_len- 1);
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