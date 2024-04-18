class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> vect;
        int c=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                vect.push_back(nums[i]);
            }else c++;
        }
        while(c--){
            vect.push_back(0);
        }
        nums=vect;
    }
};
