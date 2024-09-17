class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i=0,j=0;
        int x=s.size();
        int y=t.size();
        while(i<x&&j<y){
            if(s[i]==t[j]){
                i++,j++;
            }else{
                j++;
            }
        }
        if(i==x)
        return true;
        return false;
    
    }
};
