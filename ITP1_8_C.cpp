#include <bits/stdc++.h>
using namespace std;

int main(){
    int a[26] = {0};
    string s;
    while(getline(cin, s)){
        for(int i=0;i<s.size();++i){
            if(isupper(s[i])){
                s[i] = tolower(s[i]);
            }
            if('a' <= s[i] <= 'z'){
                a[s[i] - 'a']++;
            }
        }
    }
    for(int i=0;i<26;++i){
            cout << (char)(i + 'a') << " " << ": " << a[i] << endl;
    }
    return 0;
}