#include <cctype>
#include <iostream>
#include <cstring>
#include <string.h>
using namespace std;
void stringlen(const char *str){
    int count = 0;
    while(*(str+count)!='\0'){
        count++;
    }
    cout <<count;
}
int main(){
    char str[] = "ad138kw+~!$%?';]qjj";
    stringlen(str);
    return 0;
}