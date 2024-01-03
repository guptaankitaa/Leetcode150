class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int candidate = 0;
        int count = 0;

        for(int i = 0; i < n; i++){
            if(count == 0){
                candidate = nums[i];
                count++;
            }
            else if(candidate == nums[i]){
               count++;
            }
            else{
                count--;
            }
            
        } 
        return candidate;
    }
};
//TC = O(n)
//SC = O(1)  
