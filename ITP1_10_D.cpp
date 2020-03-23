#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    double x[n] = {0}, y[n] = {0};
    double d1 = 0,d2 = 0,d3 = 0,inf=0;
    for(int i=0;i<n;++i){
        cin >> x[i];
    }
    for(int i=0;i<n;++i){
        cin >> y[i];
    }
    for(int i=0;i<n;++i){
        d1 += fabs(x[i] - y[i]);
        d2 += pow(x[i] - y[i],2);
        d3 += pow(fabs(x[i] - y[i]),3);
        inf = max(inf,fabs(x[i]-y[i]));
    }
    d2 = sqrt(d2);
    printf("%.6f\n",d1);
    printf("%.6f\n",d2);
    printf("%.6f\n",pow(d3,1.0/3.0));
    printf("%.6f\n",inf);
    return 0;
}