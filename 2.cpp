/*You are given two linked lists representing two non-negative numbers. The digits are stored in reverse order and each of their nodes contain a single digit. Add the two numbers and return it as a linked list.
Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
Output: 7 -> 0 -> 8
*/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int sum=0;
        ListNode *phead,*temp,*ptail;
        phead = temp = ptail =NULL;
        
        while(l1||l2||sum==1){
            if(l1){
                sum+=l1->val;
                l1 = l1->next;
            }
            if(l2){
                sum+=l2->val;
                l2 = l2->next;
            }
            if(phead == NULL){
                phead = new ListNode(sum%10);
                ptail = phead;
                sum /=10;
            }
            else{
                temp = new ListNode(sum%10);
                ptail->next=temp;
                ptail = temp;
                sum/=10;
            }
        }
        return phead;
    }
    
};
