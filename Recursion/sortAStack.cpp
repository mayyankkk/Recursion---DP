// Problem link: https://practice.geeksforgeeks.org/problems/sort-a-stack/1
/*The structure of the class is
class SortedStack{
public:
    stack<int> s;
    void sort();
};
*/

/* The below method sorts the stack s
you are required to complete the below method */
void insert(stack<int> &s, int x)
{
    if (s.empty() || x >= s.top())
    {
        s.push(x);
        return;
    }
    int val = s.top();
    s.pop();
    insert(s, x);
    s.push(val);
}

void SortedStack ::sort()
{
    if (s.empty())
    {
        return;
    }
    int temp = s.top();
    s.pop();
    sort();
    insert(s, temp);
}
