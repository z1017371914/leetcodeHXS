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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL||head->next==NULL)
            return head;
        ListNode *preHead = new ListNode(0);
        preHead ->next = head;
        ListNode *pre = preHead,*current = head;
        
        map<int,bool> mmap;
        while(current){
            if(mmap[current->val]==false){
                mmap[current->val] = true;
                pre->next = current;
                pre = current;
                current = current->next;
            }else{
                ListNode *temp = current;
                current = current->next;
                delete temp;
            }
        }
        pre->next = NULL;
        
        return head;
    }
};
