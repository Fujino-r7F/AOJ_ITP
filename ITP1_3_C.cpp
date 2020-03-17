#include <iostream>
#include <string>
using namespace std;

int main(){
    int x[10010] = {0};
    int y[10010] = {0};
    for(int i=0;i<10000;++i){
        cin >> x[i];
        cin >> y[i];
    }
    for(int i=0;i<10000;++i){
        if(x[i] == 0 && y[i] == 0)break;
        if(x[i] <= y[i]){
            cout << x[i] << " " << y[i] << endl; 
        }else{
            cout << y[i] << " " << x[i] << endl;
        }
    }
    return 0;
}