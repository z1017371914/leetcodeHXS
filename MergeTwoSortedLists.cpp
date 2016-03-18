class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* newList =NULL;
        ListNode* ptemp1 = l1;
        ListNode* ptemp2 = l2;
        if (l1==NULL) {
            return  l2;
        }
        if (l2==NULL) {
            return l1;
        }
        while (ptemp1&&ptemp2) {
            if (ptemp1->val<=ptemp2->val) {
                if (newList == NULL) {
                    newList = ptemp1;
                }
                else{
                    newList->next = ptemp1;
                    newList = newList->next;
                }
                ptemp1 = ptemp1->next;
            }
            else{
                if (newList == NULL) {
                    newList = ptemp2;
                }
                else{
                    newList->next = ptemp2;
                    newList = newList->next;
                }
                ptemp2 = ptemp2->next;
            }
        }
        if (ptemp1) {
            newList->next=ptemp1;
        }
        if (ptemp2) {
            newList->next = ptemp2;
        }
        if (l1->val<=l2->val) {
            return l1;
        }else{
            return l2;
        }
    }
    
};
