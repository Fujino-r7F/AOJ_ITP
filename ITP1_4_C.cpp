#include <iostream>
#include<stdio.h>
#include <string>
using namespace std;

const double PI=3.141592653589;
int main(){
    int a;
    int b;
    string op;
    while(true){
        cin >> a >> op >> b;
        if(op == "?")break;
        if(op == "+"){
            cout << a + b << endl;
        }else if(op == "-"){
            cout << a - b << endl;
        }else if(op == "*"){
            cout << a * b << endl;
        }else{
            cout << a / b << endl;
        }
    }
    return 0;
}