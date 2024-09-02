class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        vector<int>copy(nums);
        sort(nums.begin(),nums.end());
        int k =nums.size()-1;
        int element = nums[k];
        for(int i=0;i<copy.size();i++){
            if(copy[i]==element){
                return i;
            }
        }
        return -1;
    }
};
