class Solution {
public:

  void reverse(vector<int>& nums, int s, int e){
      while(s<e){
           int temp = nums[s];
           nums[s] = nums[e];
           nums[e] = temp;
           s++;
           e--;
      }
  }
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        if(k > n){
            k = k%nums.size();
        }
        int i = 0;
        reverse(nums,i,n-k-1);
        reverse(nums,n-k,n-1);
        reverse(nums,i,n-1);
    }
};
//TC = O(n)
//SC = O(1)
