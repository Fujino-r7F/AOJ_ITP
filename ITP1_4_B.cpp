#include <iostream>
#include<stdio.h>
#include <string>
using namespace std;

const double PI=3.141592653589;
int main(){
    double r;
    cin >> r;
    printf("%.6f %.6f\n",PI*r*r,2*PI*r );
    return 0;
}