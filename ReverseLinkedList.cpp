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
    ListNode* reverseList(ListNode* head) {
        if(head==NULL||head->next==NULL)
            return head;
        ListNode *currentNode = head;
        ListNode *preNode = NULL;
        while(currentNode){
            ListNode *temp = currentNode->next;
            currentNode ->next = preNode;
            preNode = currentNode;
            currentNode = temp;
        }
        return preNode;
    }
};
