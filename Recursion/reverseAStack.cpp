// Problem link: https://practice.geeksforgeeks.org/problems/reverse-a-stack/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article

class Solution
{

public:
    void insert(stack<int> &st, int x)
    {
        if (st.empty())
        {
            st.push(x);
            return;
        }
        int val = st.top();
        st.pop();
        insert(st, x);
        st.push(val);
    }

    void Reverse(stack<int> &St)
    {
        if (St.empty())
        {
            return;
        }
        int val = St.top();
        St.pop();
        Reverse(St);
        insert(St, val);
    }
};