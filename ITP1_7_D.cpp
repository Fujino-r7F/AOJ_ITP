#include <iostream>
#include <stdio.h>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int n,m,l;
    cin >> n >> m >> l;
    vector<vector<int> > a(n, vector<int>(m));
    vector<vector<int> > b(m, vector<int>(l));
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            cin >> a.at(i).at(j);
        }
    }
    for(int i=0;i<m;++i){
        for(int j=0;j<l;++j){
            cin >> b.at(i).at(j);
        }
    }

    for(int i=0;i<n;++i){
        for(int k=0;k<l;++k){
            long long int sum = 0;
            for(int j=0;j<m;++j){
                sum += a.at(i).at(j) * b.at(j).at(k);
            }
            cout << sum;
            if(k != l-1)cout << " ";
        }
        cout << endl;
    }
    
    return 0;
}