//Adrish Purkayastha
//PRN: 23070123011
//EnTC A1
//C++ Program to reverse a string using recursion
#include <iostream>
using namespace std;
char rev_str(char *str){
    if(*str != '\0'){
        rev_str(str+1);
        cout<<*str;
    }
}
int main(){
    char str[20];
    cout<<"Enter a word: ";
    cin>>str;
    rev_str(str);
}
/*
OUTPUT:
Enter a word: hello
olleh

Enter a word: dog
god
*/