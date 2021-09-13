#include <iostream>
#include <set>
#include <map>
#include <cmath>
#include <algorithm>

using namespace std;

map<unsigned, double> Dijkstra(unsigned N, double **input, unsigned from)
{
    set<unsigned> unused = {0};
    map<unsigned, double> ans = {{from, 0}};
    for (unsigned i = 1; i < N; ++i)
    {
        unused.insert(i);
        ans[i] = INFINITY;
    }
    unsigned through = from;
    while (unused.size() > 1)
    {
        double small = INFINITY;
        unsigned nearest;
        for (auto j : unused){
            if(small > input[through][j]){
                small = input[through][j];
                nearest = j;
            }
            ans[j] = min(ans[through] + input[through][j], ans[j]);
        }
        unused.erase(through);
        through = nearest;
    }
    return ans;
}

int main()
{
    unsigned N;
    double tmp;
    cout << "Enter number of nodes:" << endl;
    cin >> N;
    double **transparency = new double *[N];
    for (unsigned i = 0; i < N; ++i)
    {
        transparency[i] = new double[N];
        for (unsigned j = 0; j < N; ++j)
        {
            cin >> tmp;
            transparency[i][j] = tmp;
        }
    }
    auto res = Dijkstra(N, transparency, 0);
    cout << endl << "Answer:\n";
    for (auto el : res)
        cout << el.first << " - " << el.second << endl;
    for (unsigned i = 0; i < N; ++i)
    {
        delete[] transparency[i];
    }
    delete transparency;
    return 0;
}