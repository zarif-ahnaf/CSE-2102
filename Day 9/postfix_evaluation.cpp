#include<bits/stdc++.h>
using namespace std;

auto performOperation(const int operand1,const int operand2, const char &operation)
{
    switch(operation)
    {
    case '+':
        return operand1 + operand2;
    case '-':
        return operand1 - operand2;
    case '/':
        return operand1 / operand2;
    case '*':
        return operand1 * operand2;
    default:
        return 0;
    }

}

auto evaluatePostfixExpression(const string &expression)
{
    stack<int> stack;
    for(auto c:expression)
    {
        if(isdigit(c))
        {
            stack.push(c-'0');
        }
        else
        {
            auto operand2 = stack.top();
            stack.pop();
            auto operand1 = stack.top();
            stack.pop();
            auto result = performOperation(operand1, operand2,c);
            stack.push(result);
        }
    }
    if(stack.size()>1) cout << "There are more than 1 elements" << endl;
    return stack.top();
}


int main()
{
    string expression;
    cin >> expression;
    int result = evaluatePostfixExpression(expression);
    cout << "Result of Postfix Expression " <<expression << " is: "<< result <<endl;
}
