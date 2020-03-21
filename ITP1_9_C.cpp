#include <bits/stdc++.h>
using namespace std;

int main(){
    string t,h;
    int t_score=0,h_score=0,n;
    cin >> n;
    for(int i=0;i<n;++i){
        cin >> t >> h;
        if(t.compare(h)==0){
            t_score++;h_score++;
        }else if(t.compare(h)>0)t_score +=3;
        else h_score+=3;
    }
    cout << t_score << " " << h_score << endl;
    return 0;
}