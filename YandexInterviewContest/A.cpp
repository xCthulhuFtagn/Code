#include <string>
#include <iostream>

using namespace std;

int main(){
    string i, j;
    cin >> i >> j;
    size_t ans = 0;
    for(auto simbol : j){
        ans += (i.find(simbol) != string::npos)? 1 : 0;
    }
    cout << ans;
}