#include <iostream>
#include <unordered_set>
#include <string>

int main() {
    std::unordered_set<std::string> string_set;
    std::string operation, word;

    while (std::cin >> operation) {
        if (operation == "+") {
            std::cin >> word;
            string_set.insert(word);
        } else if (operation == "-") {
            std::cin >> word;
            string_set.erase(word);
        } else if (operation == "?") {
            std::cin >> word;
            if (string_set.find(word) != string_set.end()) {
                std::cout << "YES" << std::endl;
            } else {
                std::cout << "NO" << std::endl;
            }
        } else if (operation == "#") {
            break;
        }
    }

    return 0;
}
