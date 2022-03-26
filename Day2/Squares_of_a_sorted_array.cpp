bool compare( int x, int y)
{
    return abs(x) < abs(y);
}
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums)
    {
        sort(nums.begin(), nums.end(), compare);
        int n = nums.size();
        for ( int i = 0; i < n; i++)
        {
            nums[i] = nums[i] * nums[i];
        }

        return nums;

    }
};