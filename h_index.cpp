class Solution {
public:
    bool hind(int mid, vector<int>& nums){
        int c=0;
        for(int i : nums){
            if(i-mid>=0) c++;
        }
        return c>=mid;
    }
    int hIndex(vector<int>& nums) {
        int low=0;
        int high = nums.size();
        int ans=0;
        while(low<=high){
            int mid = (low+high)/2;

            if(hind(mid,nums)){
                ans=mid;
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return ans;
    }
};
