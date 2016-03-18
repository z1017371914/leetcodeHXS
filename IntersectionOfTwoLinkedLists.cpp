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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int lengthA = 0,lengthB = 0;
        ListNode *temp = headA;
        while(temp){
            lengthA++;
            temp = temp->next;
        }
        temp = headB;
        while(temp){
            lengthB++;
            temp = temp->next;
        }
        ListNode *tempA = headA;
        ListNode *tempB = headB;
        if(lengthA>lengthB){
            for(int i=0;i<(lengthA-lengthB);i++){
                tempA = tempA->next;
            }
        }else{
            for(int i=0;i<(lengthB-lengthA);i++){
                tempB = tempB->next;
            }
        }
        for(int i=0;i<min(lengthA,lengthB);i++){
            if(tempA==tempB){
                return tempA;
            }
            tempA = tempA->next;
            tempB = tempB->next;
        }
        
        return NULL;
        
        
        
    }
};
