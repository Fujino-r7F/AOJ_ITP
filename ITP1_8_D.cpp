#include <bits/stdc++.h>
using namespace std;

int main(){
    string s,str;
    string p;
    cin >> s;
    cin >> p;
    str = s + s;
    if(str.find(p) != string::npos){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    
    return 0;
}