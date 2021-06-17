#include <iostream>
using namespace std;
/*pointers offset*/
void reverse(int num[],int num_len){
    for(int i=0;i<num_len/2;i++){
        int temp = *(num+i);
        int indexend = num_len -1 -i;
        *(num+i) = *(num+indexend);
        *(num+indexend)=temp;
    }
    for(int k=0;k<num_len;k++){
        cout <<num[k]<<" ";
    }
}
void print(int arr[],int num_len){
    for(int j=0;j<num_len;j++){
        cout << arr[j]<<" ";
    }
}
int main(){
    int arr_len;
    int arr[arr_len];
    
    cout << "enter the number of integers- ";
    cin >> arr_len;
    for(int j=0;j<arr_len;j++){
        cout << "enter "<<j<<" element ";
        cin >>arr[j];
    }
    print(arr,arr_len);
    cout <<"\n";
    reverse(arr,arr_len);
}