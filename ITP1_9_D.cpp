#include <bits/stdc++.h>
using namespace std;

int main(){
    string str,order,rep;
    int n,a,b;
    cin >> str;
    cin >> n;
    for(int i=0;i<n;++i){
        cin >> order;
        cin >> a >> b;
        if(order == "print"){
            cout << str.substr(a,b-a+1) << endl;
        }else if(order == "reverse"){
            string str_rev = str.substr(a,b-a+1);
            reverse(str_rev.begin(),str_rev.end());
            str = str.substr(0,a)+str_rev+str.substr(b+1,str.size()-a-1);
        }else if(order == "replace"){
            cin >> rep;
            str.replace(a,b-a+1,rep);
        }
    }
    return 0;
}