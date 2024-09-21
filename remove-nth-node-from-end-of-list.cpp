/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count =0;
        ListNode *temp = head;
        while(temp){ // to count numbers of nodes
            count++;
            temp =temp->next;
        };
        count-=n;
        if(count==0){ // phle mode ko delete krne ke liye 
            temp=head;
            head=head->next;
            delete temp;
            return head;
        }
        ListNode *curr=head,*prev=NULL;
        while(count--){
            prev=curr;
            curr=curr->next;
        };
        prev->next = curr->next;   // it will skip 4th node bro
        delete curr;
        return head;
    }
};
