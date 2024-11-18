#include <bits/stdc++.h>
using namespace std;

unordered_map<char,int> symbol =
{
    {'[', -1}, {'(', -2}, {'{', -3},
    {']', 1},  {')', 2},  {'}', 3}
};



int main()
{
    string s;
    cin >> s;
    stack<char> s1;

    for(auto p:s)
    {
        int n = symbol[p];
        if (n < 0)
        {
            s1.push(p);

        }
        else
        {
            int n2 = symbol[s1.top()];
            if(n+n2 == 0)
            {
                s1.pop();
            }
        }

    }
    if(s1.size() == 0) cout << "The parenthesis are balanced" << endl;
    else cout << "The parentheses are not balanced" << endl;
}
