class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int>st;
        // int count =0;
        int n=operations.size();
        for(int i=0;i<n;i++){
           string op=operations[i];
            if(op=="C"){
                st.pop();
            }else if(op=="D"){
                st.push(2*st.top());
            }else if(op=="+"){
                int top=st.top();
                st.pop();
                int top1 = top + st.top();
                st.push(top);
                st.push(top1);
            }else{
                st.push(stoi(op));
            }
        }
    
         int sum = 0;
        while (!st.empty()) {
            sum += st.top();
             st.pop();
        }

        return sum;
    }

    
};
