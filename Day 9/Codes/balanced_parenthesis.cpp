#include <bits/stdc++.h>
using namespace std;

unordered_map<char, int> symbol =
{
    {'[', -1}, {'(', -2}, {'{', -3},
    {']', 1},  {')', 2},  {'}', 3}
};

string isbalanced(string s)
{
    stack<char> st;
    for (auto bracket : s)
    {
        if (symbol[bracket] < 0)
        {
            st.push(bracket);
        }
        else
        {
            if (st.empty()) return "No";
            auto top = st.top();
            st.pop();
            if (symbol[top] + symbol[bracket] != 0) return "No";
        }
    }
    if (st.empty()) return "Yes";
    return "No";
}

int main()
{
    string s;
    cin >> s;
    cout << isbalanced(s) << endl;
    return 0;
}
