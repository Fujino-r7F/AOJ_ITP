#include <iostream>
#include <stdio.h>
#include <string>
#include <algorithm>
using namespace std;

const double PI=3.141592653589;
int main(){
    int n,max_num = -1000001,min_num = 1000001,tmp=0;
    long long int sum = 0;
    cin >> n;
    for(int i=0;i<n; i++){
        cin >> tmp;
        sum += tmp;
        max_num = max(max_num,tmp);
        min_num = min(min_num,tmp);
    }
    printf("%d %d %lld\n",min_num,max_num,sum);
    return 0;
}