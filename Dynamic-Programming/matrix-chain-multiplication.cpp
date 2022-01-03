class Solution {
public:
    vector<vector<int>> dp;
    int maxCoins(vector<int>& nums) {
        int n = nums.size();
        int i = 1, j = n-1;
        dp = vector<vector<int>>(n,vector<int>(n,-1));
        int ans = solve(nums, i,j);
        for(auto x: dp){
            for(auto y: x){
                cout<<y<<" ";
            }
            cout<<endl;
        }
        return ans;
    }
    
    int solve(vector<int>& nums, int i, int j){
        if(i>=j) return 0;
        if(dp[i][j] != -1) return dp[i][j];
        int ans = INT_MAX;
        for(int k=i;k<j;k++){
            int temp = solve(nums, i,k) + solve(nums, k+1, j) + nums[i-1]*nums[k]*nums[j];
            if(temp < ans) ans = temp;
        }
        dp[i][j] = ans;
        return ans;
    }
};
//5,4,6,2,7 represent matrices of
//5x4,4x6,6x2,2x7