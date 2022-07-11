
#include <string>
#include <vector>
#include <iostream>
std::vector<std::string> solution(const std::string& s) {
    std::vector<std::string> vec;
    if (s.size() == 0)
        return vec;
    int mysize = 0;
    mysize     = s.size()/2;
    if (s.size() % 2 != 0)
        mysize++;
    vec.resize(mysize);
    std::cout << mysize;
    // abcdef
    int flag  = 0;
    int count = 0;
    for (auto letter : s) {
        vec[count] += letter;
        flag++;
        if (flag == 2) {
            flag = 0;
            count++;
        }
    }
    if (vec[count].size() == 1)
        vec[count] += '_';
    return vec;
}
int main() {
    auto sol = solution("");
     for (std::string let : sol)
        std::cout << let << " ";
    return 0;
}