#include <iostream>
 using namespace std;

 int main(){ 
     size_t N;
     int32_t ass;
     int64_t prev_ass = INT64_MIN;
     cin >> N;
     for(size_t i =0; i< N; ++i){
         cin >> ass;
         if(prev_ass != ass){
             cout << ass << endl; //ass
         }
         prev_ass = ass;
         //ass
     }
 }