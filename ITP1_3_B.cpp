#include <iostream>
#include <string>
using namespace std;

int main(){
    int A[10010] = {0};
    for(int i=0;i<10000;++i){
        cin >> A[i];
        if(A[i] == 0)break;
    }
    int j=0;
    while(true){
        if(A[j] == 0)break;
        cout << "Case " << j+1 << ": " << A[j] << endl;
        j++; 
    }
    return 0;
}