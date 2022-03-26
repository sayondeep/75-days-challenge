class Solution {
public:
    vector<int> plusOne(vector<int>& digits)
    {
        vector<int> ans;
        int n = digits.size();
        int carry = 1;
        for (int i = n - 1; i >= 0; i--)
        {
            int val = digits[i] + carry;

            if (val >= 10)
            {
                carry = val / 10;
                val = val % 10;

            }
            else
                carry = 0;

            ans.push_back(val);
        }
        if (carry)
            ans.push_back(carry);
        reverse(ans.begin(), ans.end());

        return ans;
    }
};