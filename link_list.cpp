#include<iostream>
using namespace std;


class Node{
    public:
    int data;
    Node *next;

    Node(int val){
        data = val;
        next = NULL;
    }
};
Node* Head = NULL;  //global 

 void  insertBIG(int x){           // Time Complexity: O(1) 
    
    Node *temp = new Node(x);

    temp->next = Head;
    Head = temp ;
}

void insertEND(int x){              // Time Complexity: O(n) 
    Node *temp = new Node(x);

    if (Head == NULL)
    {
        Head = temp;
        return;
    }else{
       Node *tail = Head ;
       while (tail->next != NULL){
           tail = tail->next;

        }
        tail->next = temp;
    }
    

}
void display(){
    Node * temp = Head;
    while(temp != NULL){
        cout << temp->data << " --> ";
        temp = temp-> next;
    }

}

int main(){
    insertEND(8);
    insertEND(7);
    insertEND(6);
    insertEND(5);
    insertBIG(1);
    insertBIG(2);
    insertBIG(3);
    insertBIG(4);
   
    cout << "Linked List: ";
    display();
}