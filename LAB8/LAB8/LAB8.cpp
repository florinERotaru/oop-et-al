// LAB8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <fstream>
#include <map>
#include <queue>
#include <algorithm>    // std::min
struct compare {
    bool operator()( std::pair<std::string, int>& x, std::pair<std::string, int>& y) const {
        if (x.second != y.second)
            return x.second < y.second;
        else
            return (x.first.compare(y.first)>0);
    }
};
void minimize(std::string &str) {
    for (int i = 0; i < str.length(); i++)
        str[i] = tolower(str[i]);
}
void print_map(std::map<std::string, int> map) {
    std::cout << "===mapped phrase===\n";
    std::map<std::string, int>::iterator it;
    for (it = map.begin(); it != map.end(); it++)
        std::cout << it->first << " : " << it->second << "\n";
}

void print_queue(
      std::priority_queue<std::pair<std::string, int>, 
    std::vector<std::pair<std::string, int>>, compare> my_queue) {
    std::cout << "===priority queue===\n";
    while (!my_queue.empty()) {
        std::cout << my_queue.top().first << " => " << my_queue.top().second << "\n";
        my_queue.pop();
    }
}
void phrase_to_map(std::string s, std::map<std::string, int> &freq_map) {
    std::string tok;
    std::string delim = " ,.!?";
    for (int i = 0; i < s.length(); i++) {
        if (delim.find(s[i]) != std::string::npos) {
            if (!tok.empty()) {
                minimize(tok);
                freq_map[tok]++;
            }
            tok.clear();
            continue;
        }
        tok += s[i];
    }
}
void map_to_queue(std::map<std::string, int> map, 
            std::priority_queue < std::pair<std::string, int>,
                std::vector<std::pair<std::string, int>>, 
                    compare> &my_queue) {
    std::map<std::string, int>::iterator it;
    for (it = map.begin(); it != map.end(); it++) {
        std::pair<std::string, int> my_pair;
        my_pair.first = it->first;
        my_pair.second = it->second;
        my_queue.push(my_pair);
    }

}

int main() {
    std::string s;
    std::map<std::string, int> freq_map;
    std::fstream file_obj;
    file_obj.open("test.txt", std::fstream::in | std::fstream::out | std::fstream::app);//file_obj << "..."; scriere in
    std::getline(file_obj, s);
    phrase_to_map(s, freq_map);
    print_map(freq_map);
    std::priority_queue < std::pair<std::string, int>,
                std::vector<std::pair<std::string, int>>, 
                    compare> my_queue;
    map_to_queue(freq_map, my_queue);
    print_queue(my_queue);
    return 0;
}
