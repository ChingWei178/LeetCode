class Solution {
public:
    bool judgeSquareSum(int c) {
        int l = 0, r = sqrt(c);
        while (l <= r) {
            long sum = pow(l, 2) + pow(r, 2);
            if (sum == c)
                return true;
            else if (sum < c)
                l++;
            else
                r--;
        }
        return false;
    }
};