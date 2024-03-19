#include <iostream>
#include <stack>
#include <string>

bool isBalanced(std::string str) {
    std::stack<char> stack;

    for (char c : str) {
        if (c == '(' || c == '[' || c == '{') {
            stack.push(c);
        }
        else if (c == ')' || c == ']' || c == '}') {
            if (stack.empty()) {
                return false;
            }
            else if ((c == ')' && stack.top() == '(') || (c == ']' && stack.top() == '[') || (c == '}' && stack.top() == '{')) {
                stack.pop();
            }
            else {
                return false;
            }
        }
    }

    return stack.empty();
}

int main() {
    std::string sequence;
    std::cin >> sequence;

    if (isBalanced(sequence)) {
        std::cout << "yes";
    }
    else {
        std::cout << "no";
    }

    return 0;
}
