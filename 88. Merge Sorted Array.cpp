class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for(int i = 0; i < n; i++){
            nums1[m+i] = nums2[i];
       }
       sort(nums1.begin(), nums1.end());
    }
};

//Approch-1   Solved using Array + Sorting.
//Time Complexity : O(m logm)
//Space Complexity : O(1), Constant Space

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m-1;
        int j = n-1;
        int k = m+n-1;
        while(i>=0 && j>=0){
            if(nums1[i] > nums2[j]){
                nums1[k] = nums1[i];
                i--; k--;
            }
            else{
                nums1[k] = nums2[j];
                j--; k--;
            }
        }
        while(j>=0){
            nums1[k] = nums2[j];
            j--; k--;
        }
    }
};

//Approch-2   Solved using Array + TwoPointer
//Time Complexity : O(n+m)
//Space Complexity : O(1), Constant Space
