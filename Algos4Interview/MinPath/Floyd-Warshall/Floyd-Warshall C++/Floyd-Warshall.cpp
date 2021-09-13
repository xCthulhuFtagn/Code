//complexity is O(n^3)
// simple one by one comparison of alternative paths for each node

#include <iostream>
#include <vector>
//#include <cmath>
using namespace std;
/*
    0 12 5 999 22
    7 0 11 999 10
    14 7 0 999 17
    19 12 5 0 4
    15 8 1 999 0
*/
void F_W(unsigned size, double** input){
    vector<vector<double>>output(size);
    for(unsigned i = 0; i < size; ++i){
        for(unsigned j = 0; j < size; ++j){
            for(unsigned k =0; k<size; ++k){
                double compare = input[i][k] + input[k][j];
                if(input[i][j] > compare) {
                    input[i][j] = compare;
                }
            }
        }
    }
    cout << "\nAnswer:\n";
    for(unsigned i = 0; i < size; ++i){
        for(unsigned j = 0; j < size; ++j){
            cout << input[i][j] << " ";
        }
        cout << endl;
    }
}


int main(){
    unsigned N;
    double tmp;
    cout << "Enter number of nodes:" << endl;
    cin >> N;
    double **transparency = new double*[N];
    for(unsigned i = 0; i < N; ++i){
        transparency[i] = new double[N];
        for(unsigned j = 0; j < N; ++j){
            cin >> tmp;
            transparency[i][j] = tmp;
        }
    }
    F_W(N, transparency);
    for(unsigned i =0; i < N; ++i){
        delete[] transparency[i];
    }
    delete transparency;
    return 0;
}
