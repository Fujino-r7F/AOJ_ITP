#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    while(true){
        cin >> s;
        if(s[0] == '0')break;
        int sum = 0;
        for(int i=0;i<s.size();++i){
            sum += s[i] - '0';
        }
        cout << sum << endl;
    }
    return 0;
}