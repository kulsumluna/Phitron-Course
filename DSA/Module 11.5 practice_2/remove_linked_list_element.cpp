// class Solution {
// public:
//     ListNode* removeElements(ListNode* head, int val) {
//             if(head == NULL) return head;

//             ListNode* temp = head;
//             while(temp != NULL && head != NULL){
//                 if(head->val == val){
//                     ListNode* del = head;
//                     head = head->next;
//                     temp = temp->next;
//                     delete del;
//                 }
//                 else if (temp->next != NULL && temp->next->val == val){
//                     ListNode* del = temp->next;
//                     temp->next = temp->next->next;
//                     delete del;
//             }
//                 else{
//                     temp = temp->next;
//                 }
//             }
//             return head;
//     }
// };