class Solution
{
public:
    bool isValid(string s)
    {
        int n = s.size();
        stack<char> st;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[')
            {
                st.push(s[i]);
            }
            else
            {   // else closing one are ther
                // if(){ // check if it is the closing of that parenthesis only
                //     st.pop();
                //     continue;
                // }  else{  // if not equal the false
                //     return false;
                // }
                if (st.empty())
                    return false;
                if (s[i] == ')' && st.top() == '(' || s[i] == '}' && st.top() == '{' || s[i] == ']' && st.top() == '[')
                {

                    st.pop();
                    continue;
                }
                else
                    return false;
            }
        }

        if (st.empty())
            return true;
        return false;
    }
};