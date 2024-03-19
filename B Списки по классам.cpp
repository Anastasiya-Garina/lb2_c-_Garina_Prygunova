#include <iostream>
#include <vector>
#include <map>

int main() {
    std::map<int, std::vector<std::string>> classes;

    int classNum;
    std::string surname;

    while (std::cin >> classNum >> surname) {
        classes[classNum].push_back(surname);
    }

    for (int i = 9; i <= 11; ++i) {
        for (const std::string& name : classes[i]) {
            std::cout << i << " " << name << "\n";
        }
    }

    return 0;
}
