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
    ListNode *currentNode;
    bool isPalindrome(ListNode* head) {
        if (head == NULL) {
            return true;
        }
        currentNode = head ;
        return judge(head);
    }
    bool judge(ListNode *head){
        if (head==NULL) {
            return true;
        }
        if(judge(head->next)==false) return false;
        if (head->val!=currentNode->val) {
            return false;
        }else{
            currentNode = currentNode->next;
            return true;
        }
        
    }
    
};
