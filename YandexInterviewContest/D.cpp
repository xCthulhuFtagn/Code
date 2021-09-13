#include <iostream>
#include <string>

using namespace std;

void gen(size_t n, size_t opened, string& output){ //n -- открытые скобки
    if (opened == n){
        cout << output;
        for (size_t i = 0; i < 2*n - output.size(); ++i)
            cout << ")";
        cout << endl;
        return;
    }
    output.push_back('(');
    gen(n, opened + 1, output);
    output.pop_back();
    if (output.size() < 2 * opened){
        output.push_back(')');
        gen(n, opened, output);
        output.pop_back();
    }
}

int main(){
    size_t N;
    cin >> N;
    string output;
    gen(N, 0, output);
}