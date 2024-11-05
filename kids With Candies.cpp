class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n=candies.size();
        int maxc=*max_element(begin(candies),end(candies));
        vector<bool>result(n,false);
        for(int i=0;i<n;i++){
            if(candies[i]+ extraCandies>=maxc){
            result[i]= true;

            }
        }
        return result;
    }
};
