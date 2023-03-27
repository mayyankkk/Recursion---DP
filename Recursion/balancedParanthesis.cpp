// Problem link: https://leetcode.com/problems/generate-parentheses/description/

class Solution
{
public:
    vector<string> ans;
    void helper(int o, int c, string op)
    {
        if (o == 0 && c == 0)
        {
            ans.push_back(op);
            return;
        }
        if (o != 0)
        {
            string op1 = op;
            op1 += "(";
            helper(o - 1, c, op1);
        }
        if (c > o)
        {
            string op2 = op;
            op2 += ")";
            helper(o, c - 1, op2);
        }
    }
    vector<string> generateParenthesis(int n)
    {
        string v = "";
        helper(n, n, v);
        return ans;
    }
};