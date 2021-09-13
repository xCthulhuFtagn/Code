#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    string a, b;
    cin >> a >> b;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    (a == b)? cout << 1 :  cout << 0;
    return 0;
}