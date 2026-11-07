#include <iostream>
using namespace  std;

class Node{
    public:
    int data;
    Node *next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

Node *createLinkedList(int val ){
    if (val == 0)
        return NULL;
    Node *temp = NULL;
    temp = new Node (val);
    temp->next = createLinkedList( val - 1);
    return temp;
}

// Node* deleteNode(Node* curr, int pos) {
//        // delete a particular node  by recursion
//         if(pos==1){
//             Node *temp = curr ->next ;
//             delete curr;
//             return temp;
//         }
//         curr->next = deleteNode(curr->next , pos-1);
//         return curr;
//}

Node* deleteNode(Node* pos) {
    // delete a particular node  without using head pointer 
    Node *temp = pos ->next;
    pos->data = temp->data;
    pos->next = temp->next;
    delete temp;
    return pos;
}

// Node* deleteNode(Node* Head, int x){
//     // Linked List Delete at Position
//     if(x==1){
//         Node *temp = Head;
//         Head = Head->next;
//         delete temp;
//         return Head;
//     }
//     else{
//          x--;
//         Node *curr = Head;
//         Node *prev = NULL;
           
//         while(x--){
//             prev = curr;
//             curr = curr->next;
//         }
//         prev->next = curr->next ;
//         delete curr;
        
//         return Head;
//         }
// }

void display(Node *Head){
    Node * temp = Head;
    while(temp != NULL){
        cout << temp->data << " --> ";
        temp = temp-> next;
    }

}
int main (){
    Node* Head = createLinkedList(5);

    Node* temp = Head;

    cout<<"BEFORE\n";
    display(Head);


    /*calling delete function without Head pointer 

     Node *ptr = Head->next->next->next;   

    deleteNode(ptr);
    */

    cout <<"\n AFTRE : \n";

    display(Head);
    
}

