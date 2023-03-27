// Problem link: https://leetcode.com/problems/subsets-ii/submissions/923193636/

class Solution
{
public:
    vector<vector<int>> ans;
    map<vector<int>, int> mp;
    void helper(vector<int> nums, vector<int> &op)
    {
        if (nums.size() == 0)
        {
            if (mp[op] == 0)
            {
                ans.push_back(op);
            }
            mp[op]++;
            return;
        }
        vector<int> op1 = op, op2 = op;
        op2.push_back(nums.back());
        nums.pop_back();
        helper(nums, op1);
        helper(nums, op2);
    }

    vector<vector<int>> subsetsWithDup(vector<int> &nums)
    {
        vector<int> op;
        sort(nums.begin(), nums.end());
        helper(nums, op);
        return ans;
    }
};