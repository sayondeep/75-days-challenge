class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& arr)
    {
        int n = arr.size();
        sort(arr.begin(), arr.end());
        for (int s : arr)
            cout << s << " ";
        cout << endl;
        vector<vector<int>> ans;
        set<vector<int>>s;
        for (int i = 0; i < n; i++)
        {
            if (i == 0 || arr[i] != arr[i - 1])
            {
                int j = i + 1;
                int k = n - 1;
                int t = -1 * arr[i];
                while (j < k)
                {
                    if (arr[j] + arr[k] > t)
                        k--;
                    else if (arr[j] + arr[k] < t)
                        j++;
                    else if (arr[j] + arr[k] == t)
                    {
                        vector<int> v;
                        v.push_back(arr[i]);
                        v.push_back(arr[j]);
                        v.push_back(arr[k]);
                        ans.push_back(v);
                        //sort(v.begin(),v.end());

                        /*for(int e :v)
                                cout<<e<<" ";
                            cout<<endl;*/

                        /* if(s.find(v)==s.end())
                         {
                             s.insert(v);
                             for(int e :v)
                                 cout<<e<<" ";
                             cout<<endl;
                             ans.push_back(v);
                         }*/
                        while (j < k && arr[j] == arr[j + 1])
                            j++;
                        while (j < k && arr[k] == arr[k - 1])
                            k--;

                        j++; k--;
                    }
                }
            }


        }
        return ans;
    }
};