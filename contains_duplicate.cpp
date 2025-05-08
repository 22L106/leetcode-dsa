class Solution {
    public boolean containsDuplicate(int[] nums) {
        Set<Integer> num = new HashSet<>();
        for(int it : nums){
            if(num.contains(it)) return true;
            num.add(it);
        }
        return false;
        
    }
}