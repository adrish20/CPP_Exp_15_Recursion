//Adrish Purkayastha
//PRN: 23070123011
//EnTC A1
//C++ Program to find the sum of all integers from 1 to that number.
#include <iostream>
using namespace std;
int sum(int x){
    if (x==1){
        return 1;
    }
    else {
        return x+sum(x-1);
    }
}
int main(){
    int num, ssum;
    cout<<"Enter a number: ";
    cin>>num;
    ssum = sum(num);
    cout<<"Sum is : "<<ssum<<endl;
}
/*
OUTPUT:
Enter a number: 5
Sum is : 15

Enter a number: 3
Sum is : 6
*/