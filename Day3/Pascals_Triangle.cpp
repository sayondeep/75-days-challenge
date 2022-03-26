class Solution {
public:
    vector<vector<int>> generate(int numRows)
    {
        vector<vector<int>> ans;
        vector<int> prev_row;
        for (int rows = 0; rows < numRows; rows++)
        {
            vector<int> curr_row;
            curr_row.push_back(1);
            int i = 0;
            while (rows > 0 && i < prev_row.size() - 1)
            {
                curr_row.push_back(prev_row[i] + prev_row[i + 1]);
                i++;
            }
            ans.push_back(curr_row);
            for (int x : curr_row)
                cout << x << " ";

            cout << endl;
            swap(prev_row, curr_row);
            prev_row.push_back(0);



        }

        return ans;
    }
};