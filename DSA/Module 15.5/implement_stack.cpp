// class Stack

// {
// public:

//     Node *head=NULL;

//     int size=0;;

//     Stack()

//     {

//     }

 

//     int getSize()

//     {

//         return size;

//     }

 

//     bool isEmpty()

//     {

//         return head==NULL;

//     }

 

//     void push(int data)

//     {

//         //Write your code here
//          Node *newnode = new Node(data);

//         if(head ==NULL){

//            head = newnode;

//         }else{

//             newnode->next = head;
//             // tail->next=newnode;

//             head = newnode;

//         }

//         size++;

//     }

 

//     void pop()

//     {

//         //Write your code here

//         if(head==NULL){

//             return;

//         }else{

//             Node *deletenode = head;

//             head = head->next;

//             free(deletenode);

//             size--;

//         }

//     }

 

//     int getTop()

//     {

//         //Write your code here

//         if(head==NULL){

//             return -1;

//         }

//         return head->data;

//     }

// };

