#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    //constructor function
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};
void insertatposition(Node*&head,int d,int p){
    Node*temp =head;
    int cnt =1;
    if(p==1){
        Insertathead(head,d);
        return;}
    while(cnt<p-1){
        //pehle index pe insert
        temp = temp->next;
        cnt++;
        }
         //insert at end
         if(temp->next==NULL){
             Insertattail(temp,d);
             return;
         }
        
        //creating a node for d
        Node* nodetoInsert =new Node(d);
        nodetoInsert->next = temp->next;
        temp->next = nodetoInsert;
}
void Insertathead(Node* &head,int d){
    // if(head==NULL){
    //     head = new Node(d);
    //     return;
    // }
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;

}
void Insertattail(Node* &tail,int d){
 Node* temp = new Node(d);
  tail ->next=temp;
  tail= tail->next;
}
void deletenode(){

}
void print (Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
int main(){
    //created a new node 
    Node* node1=new Node(10);
    //cout the data of the node 
    Node*head = node1;
    Node*taill=node1;
    // print(head);
    // cout<<head<<" "<<tail<<endl;
    
    Insertattail(taill,20);

    print (head);
    Insertathead(head,40);
      print (head);
      
}


// int main(){
//     Node* head = new Node(10);
//     Node* temp1 = new Node(20);
//     cout<<head->data<<" "<<temp1->data<<" "<<endl;
//     Node* temp2 = new Node(30);
//     cout<<head<<" "<<temp1->data<<" "<<temp2->data<<endl;
//     head->next = temp1;
//     cout<<head->data<<" "<<temp1->data<<" "<<temp2->data<<endl;
//     temp1->next = temp2;
//     cout<<head->data<<" "<<temp1->data<<" "<<temp2->data<<endl;
//     return 0;}