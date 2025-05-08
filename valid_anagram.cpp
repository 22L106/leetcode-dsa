class Solution {
    public:
        bool isAnagram(string s, string t) {
            map<char,int>mp1,mp2;
            
            for(char it : s){
                mp1[it]++;
            }
            for(char it : t){
                mp2[it]++;
            }
            if(t.size()>s.size()){
                swap(mp1,mp2);
            }
            for(auto it : mp1){
                if(it.second!=mp2[it.first]) return false;
            }
            return true;
        }
    };