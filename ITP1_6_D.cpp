#include <iostream>
#include <stdio.h>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    int matrixA[n][m];
    int matrixB[m];
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            cin >> matrixA[i][j];
        }
    }
    for(int i=0;i<m;++i){
        cin >> matrixB[i];
    }
    for(int i=0;i<n;++i){
        int sum = 0;
        for(int j=0;j<m;++j){
            sum += matrixA[i][j] *  matrixB[j];
        }
        cout << sum << endl;
    }
    return 0;
}