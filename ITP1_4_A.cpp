#include <iostream>
#include<stdio.h>
#include <string>
using namespace std;

int main(){
    int a,b;
    cin >> a >> b;
    int d = a / b;
    int r = a%b;
    double fa = a;
    double fb = b;
    double f = (fa / fb);
    printf("%d %d %.5f\n",(a/b),(a%b),(fa/fb));
    return 0;
}