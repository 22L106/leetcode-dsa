class Solution {
public:      //greedy approach
    int jump(vector<int>& nums) {
        int n=nums.size(),jmp=0,curr=0,maxi=0;
        if(n<=1)return 0;
        for(int i=0;i<n;i++){
            maxi = max(maxi,i+nums[i]);
            if(i==curr){
                jmp++;
                curr=maxi;
                if(curr>=n-1) break;
            }
        }
        return jmp;
    }
};

class Solution {    //dp approach
public:
    int n;
    vector<int>dp;
    int fn(int ind,vector<int>& nums){
        if(ind>=n-1) return 0;
        if(dp[ind]!=-1) return dp[ind];
        int jmp=INT_MAX;
        for(int i=1;i<=nums[ind];i++){
            jmp = min(jmp,fn(ind+i,nums));
        }
        if(jmp==INT_MAX) return dp[ind]=jmp;
        return dp[ind]=1+jmp;
    }
    int jump(vector<int>& nums) {
        n=nums.size();
        dp.assign(n,-1)
;        return fn(0,nums);
    }
};
