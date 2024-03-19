#include <iostream>
#include <stack>
#include <sstream>
using namespace std;

int evaluatePostfixExpression(string expression) {
    stack<int> operands;
    istringstream iss(expression);
    string token;
    
    while (iss >> token) {
        if (token == "+" || token == "-" || token == "*") {
            int operand2 = operands.top();
            operands.pop();
            int operand1 = operands.top();
            operands.pop();
            if (token == "+") {
                operands.push(operand1 + operand2);
            } else if (token == "-") {
                operands.push(operand1 - operand2);
            } else if (token == "*") {
                operands.push(operand1 * operand2);
            }
        } else {
            operands.push(stoi(token));
        }
    }
    
    return operands.top();
}

int main() {
    string expression;
    getline(cin, expression);
    cout << evaluatePostfixExpression(expression);
    return 0;
}
