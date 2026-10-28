class Solution
{
public:
    bool isPalindrome(int x)
    {

        if (x < 0)
            return false;
        long rev = 0;
        int original = x;
        while (x > 0)
        {
            int dig = x % 10;
            rev = rev * 10 + dig;
            x = x / 10;
        }
        return (rev == original);
    }
};