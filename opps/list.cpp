 #include<iostream>
 using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        this->next=nullptr;//NULL==nullptr
    }
};

Node* insertAtHead(Node* &head,int data){
    Node* newNode=new Node(data);
    if(!head){
        return newNode;
    }
    newNode->next=head;
    head=newNode;
    return head;
}

void printList(Node* head){
    Node* temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

 int main() {
    Node* list=nullptr;
    list=insertAtHead(list,5);
    list=insertAtHead(list,2);
    list=insertAtHead(list,3);
    list=insertAtHead(list,4);
    printList(list);
    return 0;
 }