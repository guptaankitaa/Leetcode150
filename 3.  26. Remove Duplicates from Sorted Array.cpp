class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

    set<int> uniqueset;
    int n = nums.size();

    for(int i=0; i<n; i++){
     uniqueset.insert(nums[i]);
    }
    nums.clear();
    
    for(auto it : uniqueset)
        {
            nums.push_back(it);
        }
        return uniqueset.size();
    }
};


//Approch 1 using set

//Time complexity: O(n)            
//Space complexity: O(n)

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        int j = 1;
        while(j < n)
            {
            if(nums[i] != nums[j]){
              nums[i+1] = nums[j]; 
               i++;
               j++;
            }
            else{
               j++;
            }
           
        }
        return i+1;
    }
};

//Approch 2 using 2 pointer

//Time complexity: O(n)            
//Space complexity: O(1)


