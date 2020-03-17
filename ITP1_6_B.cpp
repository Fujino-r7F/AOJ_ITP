#include <iostream>
#include <stdio.h>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int n,num;
    string c;
    cin >> n;
    int cards[4][13] = {{0}};
    for(int i=0;i<n;++i){
        cin >> c >> num;
        if(c == "S")cards[0][num-1] = 1;
        else if(c == "H")cards[1][num-1] = 1;
        else if(c == "C")cards[2][num-1] = 1;
        else if(c == "D")cards[3][num-1] = 1;
    }
    for(int i=0;i<4;++i){
        for(int j=0;j<13;++j){
            if(cards[i][j] == 0){
                if(i == 0)cout << "S " << j+1 << endl;
                else if(i == 1)cout << "H " << j+1 << endl;
                else if(i == 2)cout << "C " << j+1 << endl;
                else if(i == 3)cout << "D " << j+1 << endl;
            }
        }
    }
    return 0;
}