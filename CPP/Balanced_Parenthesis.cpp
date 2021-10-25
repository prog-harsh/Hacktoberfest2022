#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;

    bool result = true;
    cout << "Enter a string containing ";
    cout << "("
         << ")"
         << "{"
         << "}"
         << "["
         << "]" << endl;

    cin >> s;
    stack<char> st;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
            st.push(s[i]);
        else
        {

            if (s[i] == ')')
            {

                if (st.empty() || st.top() != '(')
                    result = false;
                else
                    st.pop();
            }
            else if (s[i] == '}')
            {

                if (st.empty() || st.top() != '{')
                    result = false;
                else
                    st.pop();
            }
            else if (s[i] == ']')
            {
                if (st.empty() || st.top() != '[')
                    result = false;
                else
                    st.pop();
            }
        }
    }
    if (result && (!st.empty()))
        result = false;

    if (result)
        cout << "Valid String" << endl;

    else
        cout << "Invalid String" << endl;
}

