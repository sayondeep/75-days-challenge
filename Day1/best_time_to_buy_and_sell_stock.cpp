class Solution {
public:
    int maxProfit(vector<int>& prices)
    {

        int min_till;
        min_till = prices[0];
        int profit = 0;
        int n = prices.size();
        for (int i = 1; i < n; i++)
        {
            //cout<<min_till<<" ";
            int cost = prices[i] - min_till;
            profit = max(profit, cost);
            min_till = min(min_till, prices[i]);


        }
        //cout<<endl;
        return profit;
    }
};