#include <iostream>
#include <string>
using namespace std;

int main(){
    int a,b,c;
    int counter = 0;
    cin >> a >> b >> c;
    for(int i=a;i<=b;++i){
        if(c%i == 0)counter++;
    }
    cout << counter << endl;
    return 0;
}