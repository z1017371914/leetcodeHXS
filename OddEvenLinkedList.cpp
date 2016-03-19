class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        ListNode *oddNode = NULL;
        ListNode *evenNode = NULL;
        ListNode *oddHad = NULL;
        ListNode *evenHead =NULL;
        
        ListNode *ptemp = head;
        bool odd = true;
        if (head == NULL) {
            return NULL;
        }
        oddNode = head;
        evenNode = head->next;
        if (head->next==NULL || head->next->next==NULL) {
            return head;
        }
        oddHad = head;
        evenHead = head->next;
        ptemp = head->next->next;
        while (ptemp) {
            if (odd) { //
                oddNode->next = ptemp;
                oddNode = oddNode->next;
                odd=false;
            }
            else{
                evenNode->next = ptemp;
                evenNode = evenNode->next;
                odd=true;

            }
            ptemp = ptemp->next;
        }
        oddNode->next = evenHead;
        evenNode->next = NULL;
        return head;
        
    }
    
};
