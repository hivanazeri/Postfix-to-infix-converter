#include <iostream>
#include <stack>
using namespace std;

// Check if the character is an operator
bool isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/');
}

// Convert postfix to infix
string postfixToInfix(string postfix) {
    stack<string> stk;

    for (char c : postfix) {
        if (isalpha(c)) { 
            // Operand: Push as a string
            stk.push(string(1, c));
        } 
        else if (isOperator(c)) {
            // Operator: Pop top two elements, format them with parentheses
            string operand_2 = stk.top(); stk.pop();
            string operand_1 = stk.top(); stk.pop();

            // Ensure proper order and precedence
            string new_expr = "(" + operand_1 + c + operand_2 + ")";
            stk.push(new_expr);
        }
    }

    // Final expression is the only remaining item in the stack
    return stk.top();
}

int main() {
    string postfix;

    cout << "Enter postfix expression: ";
    cin >> postfix;

    cout << "Infix: " << postfixToInfix(postfix) << endl;
    return 0;
}
