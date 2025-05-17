class RandomizedSet {
public:
unordered_map<int,int>mp;
vector<int>v;

    RandomizedSet() {
        
    }
    
    bool insert(int val) {
       if(mp.count(val)){
         return false;
       }
       v.push_back(val);
       int ind = v.size()-1;
       mp[val]=ind;
       return true;
      
    }
    
    bool remove(int val) {
         if(mp.find(val)==mp.end()){
            return false;
       }
       int ind = mp[val];
       int last = v.back();
       swap(v[ind],v[v.size()-1]);
       v.pop_back();
       mp[last]=ind;
       mp.erase(val);
      return true;
    }
    
    int getRandom() {
        return v[rand()%v.size()];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */
