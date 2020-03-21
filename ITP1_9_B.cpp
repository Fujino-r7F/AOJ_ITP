#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int h,m;
    while(true){
        cin >> s;
        if(s == "-")break;
        cin >> m;
        for(int i=0;i<m;++i){
            cin >> h;
            s = s.substr(h) + s.substr(0,h);
        }
        cout << s << endl;
    }
    return 0;
}