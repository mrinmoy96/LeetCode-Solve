class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>ans;
        int n=nums.size();
        for(int i=0; i<n; i++){
            int val=nums[i]*nums[i];
            ans.push_back(val);
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};