class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string s;
        int i=0;
        int j=0;
        int x=word1.size();
        int y=word2.size();
        while(i<x && j<y){
            s+=word1[i++];
            s+=word2[j++];
        }
        while(i!=x){
            s+=word1[i++];
        }
        while(j!=y){
            s+=word2[j++];

        }
        return s;
           }
};
