#include <iostream>
#include <stdio.h>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    int H,W;
    while(true){
        cin >> H >> W;
        if(H == 0 && W == 0)break;
        for(int i=0;i<H;++i){
            for(int j=0;j<W;++j){
                if(i == 0 || j == 0 || j == W - 1 || i== H - 1){
                    cout << "#";
                }else{
                    cout << ".";
                }
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}