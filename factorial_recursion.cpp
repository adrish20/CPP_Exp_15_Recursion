//Adrish Purkayastha
//PRN: 23070123011
//EnTC A1
//C++ Program to find the factorial olf a number using recrusion
#include <iostream>
using namespace std;
int  factorial(int x){
    if (x<=1){
        return 1;
    }
    else return x*factorial(x-1);
}
int main(){
    int num,ans;
    cout<<"enter a number: ";
    cin>>num;
    ans = factorial(num);
    cout<<"factorial is: "<<ans<<endl;
}

/*
OUTPUT:
enter a number: 5
factorial is: 120

enter a number: 3
factorial is: 6

enter a number: 6
factorial is: 720
*/