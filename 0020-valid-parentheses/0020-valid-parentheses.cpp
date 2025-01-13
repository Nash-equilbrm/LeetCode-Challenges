class Solution {
public:
    bool isValid(string s) {
        if(s.length() % 2 == 1) return false;
        stack<char> st;
        int i = 0;
        while(i < s.length()) {
            char c = s[i];
            switch(c) {
                case '(': case '[': case '{':
                    st.push(c);
                    break;
                case ')':
                    if(st.size() > 0 && st.top() == '(')
                        st.pop();
                        break;
                    return false;
                case ']':
                    if(st.size() > 0 && st.top() == '[')
                        st.pop();
                        break;
                    return false;
                case '}':
                    if(st.size() > 0 && st.top() == '{')
                        st.pop();
                        break;
                    return false;
            }
            ++i;
        }
        return st.size() == 0;
    }
};