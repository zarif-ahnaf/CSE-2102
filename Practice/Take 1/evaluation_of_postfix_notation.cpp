#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    stack<int> s1;
    for(int i = 0; i<s.size();i++){
        char p = s[i];
        if(isdigit(p)){
            s1.push(p-'0');
        }
        else{
            auto operand2 = s1.top();
            s1.pop();
            auto operand1 = s1.top();
            s1.pop();

            int result;
            if(p == '+') result = operand1 + operand2;
            else if (p=='-') result = operand1 - operand2;
            else if (p == '*') result = operand1 * operand2;
            else if (p == '/') result = operand1 / operand2;
            s1.push(result);
        }

    }
    if(s1.size() == 1) cout << s1.top() << endl;
    else cout << "There are errors in postfix notation" << endl;

}
