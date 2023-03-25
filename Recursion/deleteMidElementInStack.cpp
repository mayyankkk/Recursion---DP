// Problem link: https://practice.geeksforgeeks.org/problems/delete-middle-element-of-a-stack/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article
class Solution
{
public:
    // Function to delete middle element of a stack.
    void deleteMid(stack<int> &s, int sizeOfStack)
    {
        // code here..
        if (s.size() == (sizeOfStack + 1) / 2)
        {
            s.pop();
            return;
        }
        int val = s.top();
        s.pop();
        deleteMid(s, sizeOfStack);
        s.push(val);
    }
};