// class Solution {
// public:
//     int find_size(ListNode* head){
//         ListNode* temp = head;
//         int count = 0;
//         while(temp != NULL){
//             count++;
//             temp = temp->next;
//         }
//         return count;
//     }
//     ListNode* removeNthFromEnd(ListNode* head, int n) {
//         if(head == NULL) return head;

//         int size = find_size(head);

//         if(size == 1 || (size - n) == 0){
//             ListNode* del = head;
//             head = head->next;
//             delete del;
//             return head;
//         }

//         ListNode* temp = head;

//         for(int i = 1; i < size - n; i++){
//             temp = temp->next;
//         }

//         ListNode* del = temp->next;
//         temp->next = del->next;
//         delete  del;
        
//         return head;
//     }
// };

