// Problem link: https://leetcode.com/problems/subsets/description/

class Solution
{
public:
    vector<vector<int>> ans;
    void helper(vector<int> nums, vector<int> &op)
    {
        if (nums.size() == 0)
        {
            ans.push_back(op);
            return;
        }
        vector<int> op1 = op, op2 = op;
        op2.push_back(nums.back());
        nums.pop_back();
        helper(nums, op1);
        helper(nums, op2);
    }
    vector<vector<int>> subsets(vector<int> &nums)
    {
        vector<int> op;
        helper(nums, op);
        return ans;
    }
};