#include <iostream>
#include <stdio.h>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int r,c;
    cin >> r >> c;
    vector<vector<int> > s(r+1, vector<int>(c+1));
    for(int i=0;i<r;++i){
        for(int j=0;j<c;++j){
            cin >> s.at(i).at(j);
            s.at(i).at(c) += s.at(i).at(j);
        }
    }
    for(int j=0;j<c;++j){
        for(int i=0;i<r;++i){
            s.at(r).at(j) += s.at(i).at(j); 
        }
        s.at(r).at(c) += s.at(r).at(j);
    }

    for(int i=0;i<=r;++i){
        for(int j=0;j<=c;++j){
            cout << s.at(i).at(j);
            if(j != c)cout << " ";
        }
        cout << endl;
    }
    return 0;
}