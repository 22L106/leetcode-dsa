class Solution {
    public:
        bool containsDuplicate(vector<int>& nums) {
            set<int>num;
            for(int it : nums){
                if(num.find(it)!=num.end()) return true;
                num.insert(it);
            }
            return false;
        }
    };