class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {

        //function
        vector<pair<int, int>> p;
        for (int i = 0; i < nums.size(); i++)
        {
            p.push_back({nums[i], i});
        }
        sort(p.begin(), p.end());

        int i = 0;
        int j = nums.size() - 1;
        vector<int> ans;
        while (i < j)
        {
            if (p[i].first + p[j].first < target)
                i++;
            if (p[i].first + p[j].first > target)
                j--;
            if (p[i].first + p[j].first == target)
            {
                //if(mp[nums[i]]!=mp[nums[j]])
                //{
                ans.push_back(p[i].second);
                ans.push_back(p[j].second);
                break;
                //}
            }
        }

        return ans;

    }
};