// 32. Longest Valid Parentheses
// Solved
// Hard
// Topics
// premium lock icon
// Companies
// Given a string containing just the characters '(' and ')', return the length of the longest valid (well-formed) parentheses substring.

 

// Example 1:

// Input: s = "(()"
// Output: 2
// Explanation: The longest valid parentheses substring is "()".
// Example 2:

// Input: s = ")()())"
// Output: 4
// Explanation: The longest valid parentheses substring is "()()".
// Example 3:

// Input: s = ""
// Output: 0



class Solution {
public:
    int longestValidParentheses(string s) {
        int n = s.size();
        stack<int>st;
        st.push(-1);
        int ans = 0;

        for(int i = 0; i < n; i++)
        {
            if(s[i] == '(')
            st.push(i);

            else
            {
                if(st.top() == -1 || s[st.top()] == ')')
                {
                    st.pop();
                    st.push(i);
                }
                else
                {
                    st.pop();
                    ans = max(ans, i - st.top());
                }
            }
        }
        return ans;
    }
};
