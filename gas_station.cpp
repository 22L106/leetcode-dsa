class Solution {
public:
int n;
    
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int start=0,curr=0,s1=0,s2=0;
        
        for(int i=0;i<gas.size();i++){
           curr+=gas[i]-cost[i];
           s1+=gas[i];
           s2+=cost[i];
           if(curr<0){
            curr=0;
            start=i+1;
           }
        }
        if(s1<s2) return -1;
    
        return start;
    }
};
