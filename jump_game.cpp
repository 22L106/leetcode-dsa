class Solution {
public:   //greedy approach
    int n;vector<int>dp;
   
    bool canJump(vector<int>& nums) {
        n=nums.size();
        int maxi=0;
        for(int i=0;i<n;i++){
            if(maxi>=i)
            maxi=max(maxi,i+nums[i]);
            else 
            return false;
        }
        return (maxi>=n-1);
    }
};

class Solution {          //dp approach
public:
    int n;vector<int>dp;
    
    bool fn(int ind, vector<int>& nums) {
        if (ind >= n - 1) return true;
        if (dp[ind] != -1) return dp[ind];

        for (int i = 1; i <= nums[ind]; i++) {
            if (fn(ind + i, nums)) {
                return dp[ind] = true;
            }
        }
        return dp[ind] = false;
    }
    bool canJump(vector<int>& nums) {
        n=nums.size();
        dp.assign(n,-1);
        return fn(0,nums);
    }
};
