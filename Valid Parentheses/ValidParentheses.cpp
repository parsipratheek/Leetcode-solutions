class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> st;

        for (int i = 0; i < s.length(); i++)
        {
            char it = s[i];
            if (it == '(' || it == '{' || it == '[')
                st.push(it);
            else
            {
                if (st.empty())
                    return false;
                char ch = st.top();
                st.pop();
                if ((it == ')' && ch == '(') ||
                    (it == ']' && ch == '[') ||
                    (it == '}' && ch == '{'))
                    continue;
                else
                    return false;
            }
        }
        return st.empty();
    }
};