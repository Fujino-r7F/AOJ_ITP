#include <bits/stdc++.h>
using namespace std;

int main(){
    string w;
    string s;
    int c = 0;
    cin >> w;
    while(true){
        cin >> s;
        if(s == "END_OF_TEXT")break;
        for(int i=0;i<s.size();i++){
            if('A'<=s[i]&&s[i]<='Z')s[i] += 'a' - 'A';
        }
        if(w==s)c++;
    }
    cout << c << endl;
    return 0;
}