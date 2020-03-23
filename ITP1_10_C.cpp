#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while(true){
        cin >> n;
        if(n == 0)break;
        double S[n] = {0};
        double sum = 0;
        for(int i=0;i<n;++i){
            cin >> S[i];
            sum += S[i];
        }
        double ave = sum / n;
        double var = 0;
        for(int i=0;i<n;++i){
            var += pow(S[i] - ave,2);
        }
        printf("%.8f\n",sqrt(var/n));
    }

    return 0;
}