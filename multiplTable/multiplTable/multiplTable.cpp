#include <vector>
#include <iostream>
using namespace std;
vector<vector<int>> multiplication_table(int n) {
    vector < vector<int >> res;
    res.resize(n); //init n uninitialized vectors
    int q = 1;
    for (vector<int> &vect : res) 
    {
        for (int i=1; i<=n; i++) 
        {
            vect.push_back(i * q);
        }
        q++;
        
    }
    return res;
}
int main() {

    auto res = multiplication_table(4);
     for (vector<int> vect : res) {
        for (int i = 0; i < 4; i++) {
             cout << vect.at(i) << " ";
        }
        cout << endl;
    }
}