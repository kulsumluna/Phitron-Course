// class Solution {
// public:
// int size(ListNode * head)
// {
//     int count=0;
//     ListNode * temp = head;
//     while(temp != NULL)
//     {
//         count++;
//         temp=temp->next;
//     }
//     return count;
// }
// void delete_head(ListNode * &head)
// {
//     ListNode * deletehead= head;
//     head=head->next;
//     delete deletehead;
// }
//     ListNode* removeNthFromEnd(ListNode* head, int n) {
//          if(head == NULL) return NULL;
//         int sz=size(head);
//         if((sz-n)==0)
//         {
//             delete_head(head);
//             return head;
//         }
//         else
//         {
//             ListNode * temp=head;
//             for(int i=1;i<sz-n;i++)
//             {
//                 temp=temp->next;
//             }
//             ListNode * deletenode= temp->next;
//             temp->next=temp->next->next;
//             delete deletenode;
        
//         }
        
//     return head;
        
//     }
// };