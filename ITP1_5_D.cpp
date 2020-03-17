#include <iostream>
#include <stdio.h>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    int n;
    int x;
    cin >> n;
    for(int i=1;i<=n;++i){
        if(i % 3 == 0)cout << " " << i;
        else{
            x = i;
            do{
                    if(x%10 == 3){
                        cout << " " << i;
                        break;
                    }
                    x /= 10;
            }while(x);
        }
    }
    cout << endl;
    return 0;
}