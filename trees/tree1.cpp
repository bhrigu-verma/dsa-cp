#include<iostream>
#include <queue>
using namespace std;
class node {
    public:
    int data;
    node* left;
    node* right;
 //node constructor
    node (int d){
        this->data = d;
        this->left=NULL;
        this->right=NULL;
    }
};
//tree builder accepting values
node *buildtree(node* root){
    cout<<"Enter the data"<<endl;
    int data;
    cin>>data;
    root =new node(data); 
    if(data==-1){return NULL;}
    cout<<"Enter the data for inserting in left of"<< data<<endl;
    root->left = buildtree(root->left);
    cout<<"Enter the data for inserting in left of"<< data<<endl;
    root->right = buildtree(root->right);
    return root;

}
//traverse in leveling
void levelordertraversal(node* root){
        queue<node*> children;
        children.push(root);
        children.push(NULL);
        while(!children.empty()){
            node* temp=children.front();
            children.pop();
            if(temp==NULL){
                //PURANA LEVEL COMPLETE TRAVERSE HO CHUKA HAI 
                cout<<endl;
                if(!children.empty()){
                    //queue still has some child nodes
                    children.push( NULL);

                }
  
            }
            else{
                cout<<temp->data<<" ";
                if(temp->left){
                    children.push(temp->left);
                }
                if(temp->right){
                    children.push(temp->right);
                }

            }
        }

}
 
int main(){
    node* root= NULL;
    root = buildtree(root);
    return 0;
}