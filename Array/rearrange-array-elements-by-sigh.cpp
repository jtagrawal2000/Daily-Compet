class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int pos=0,neg=1, n=nums.size();
        vector<int> ans(n,0);
        for(int i = 0;pos<n or neg<n or i<n; i++){
            if(nums[i]>0){
                ans[pos] = nums[i];
                pos+=2;
            }
            else if(nums[i]<0){
                ans[neg] = nums[i];
                neg+=2;
            }
            else cout<<"WTF"<<endl;
        }
        return ans;
    }
};