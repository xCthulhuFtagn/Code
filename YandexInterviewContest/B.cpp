#include <iostream>
#include <vector>

 using namespace std;

 int main(){
    size_t N, cunt = 0, max_cunt = 0;
    cin >> N;
    vector<char> ass(N);
    for(size_t i=0; i< N ; ++i){
        cin >> ass[i];
        cunt = (ass[i] == '0')? 0 : cunt+1;
        max_cunt = max(max_cunt, cunt);
    }
    cout << max_cunt;
 }