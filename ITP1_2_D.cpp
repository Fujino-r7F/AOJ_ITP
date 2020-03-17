#include <iostream>
#include <string>
using namespace std;

int main(){
    int W,H,x,y,r;
    cin >> W >> H >> x >> y >>r;
    int upper = y + r;
    int lower = y - r;
    int right = x + r;
    int left = x - r;
    if (upper <= H && 0 <= lower && right <= W && 0 <= left){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}