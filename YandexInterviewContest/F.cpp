#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <set>
#include <queue>

using namespace std;

size_t dist(int* from, int* to){
    return fabs(to[0] - from[0]) + fabs(to[1] - from[1]);
}

int main(){
    size_t N, from, to, max_path;
    int num_roads = 1;
    cin >> N;
    int** coord = new int*[N];
    bool accessible = false;
    for(size_t i =0; i < N; ++i){
        coord[i] = new int[2];
        cin >> coord[i][0] >> coord[i][1];
    }
    cin >> max_path >> from >> to;
    --from; --to;
    if(dist(coord[from], coord[to]) > max_path) {
        set<size_t> available;
        queue<size_t> width_walk; width_walk.push(from);
        for(unsigned i = 0; i < N; ++i) if(i != from and i != to) available.insert(i);
        while(!available.empty()){
            for(auto city : available){
                if(dist(coord[width_walk.front()], coord[city]) <= max_path){
                    if(dist(coord[city], coord[to]) <= max_path){
                        accessible = true;
                        break;
                    }
                    width_walk.push(city);
                    available.erase(city);
                }
            }
            width_walk.pop();
            ++num_roads;
            if(accessible) available.clear();
        }
    }
    if(!accessible) {
        num_roads = -1;
    }
    cout << num_roads;
    for(size_t i = 0; i < N; ++i) delete[] coord[i];
    delete[] coord;
}