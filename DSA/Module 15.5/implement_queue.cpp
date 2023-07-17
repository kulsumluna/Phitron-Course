// #include <bits/stdc++.h> 
// class Node
//         {
//         public:
// 	        int data;
// 	        Node *next;
// 	        Node(int data)
// 	        {
// 		        this->data = data;
// 		        this->next = NULL;
// 	        }
//         };

// class Queue {
    
// public:
    
//      Node * head=NULL;
//      Node * tail=NULL;
     
//     Queue() {
//         // Implement the Constructor
//     }

//     /*----------------- Public Functions of Queue -----------------*/

//     bool isEmpty() {
//         if(head==NULL) return true;
//         else return false;
//     }

//     void enqueue(int data) {
//         // Implement the enqueue() function
        
//         Node * newnode= new Node(data);
//         if(head==NULL){
//             head=newnode;
//             tail=newnode;
         
//         }
//            else{
//           tail->next=newnode;
//         tail=newnode;
//            }
        
//     }

//     int dequeue() {
//         // Implement the dequeue() function
        
//         if(head==NULL)
//         {
//             return -1;
//         }
//         int ans= head->data;
//         Node  *temp=head;
//         head=head->next;
//         if(head==NULL)
//         {
//             tail=NULL;    
//         }
//         delete temp;
//         return ans;
        
//     }

//     int front() {
//         // Implement the front() function
//         if(head==NULL) return -1;
//          else  return head->data;
//     }
// };