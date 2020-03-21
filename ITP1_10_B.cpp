#include <bits/stdc++.h>
using namespace std;

int main(){
    double a,b,c;
    double PI = 3.1415926535;
    double S,L,h;
    cin >> a >> b >> c;
    S = a * b * sin((c*PI/180))/2;
    printf("%.5f\n",S);
    L = sqrt(a*a+b*b-2*a*b*cos(c*PI/180))+a+b;
    printf("%.5f\n",L);
    h = b *sin(c*PI/180);
    printf("%.5f\n",h);
    return 0;
}