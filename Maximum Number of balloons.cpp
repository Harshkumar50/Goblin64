class Solution {
public:
    int maxNumberOfBalloons(string text) {
      
       unordered_map<char,int>ans;
       for(char ch:text){

            ans[ch]++;
       }
            return min({ans['b'],ans['a'],ans['l']/2,ans['o']/2,ans['n']});
    
    }
};
