// Problem Link: https://leetcode.com/problems/powx-n/description/
class Solution
{
public:
    double myPow(double x, int n)
    {
        if (n == 0)
        {
            return 1.00000;
        }
        if (n < 0)
        {
            n = abs(n);
            x = 1 / x;
        }
        double temp = myPow(x, n / 2);
        double result = temp * temp;
        if (n % 2 == 1)
        {
            result *= x;
        }
        return result;
    }
};