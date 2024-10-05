//Adrish Purkayastha
//PRN: 23070123011
//EnTC A1
//C++ Program to reverse a number using recursion
#include <iostream>
using namespace std;
int rev_num(int x){
    if(x>0){
        cout<<(x%10);
        rev_num(x/10);
    }
}
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    rev_num(num);
}
/*
OUTPUT:
Enter a number: 1234
4321

Enter a number: 1230
0321

Enter a number: 6352
2536
*/