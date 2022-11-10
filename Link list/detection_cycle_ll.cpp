# include<iostream>
using namespace std;
class node {
    public:
    int data;
    node*next ;
    node(int val){
        data = val;
        next = NULL;

    }

};
void insert(node*&head, int val){
    node*n = new node( val);
    if (head == NULL){
        head = n;
        return;
    }
    node*temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = n;

}
void display(node*head){
    node*temp = head;
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
}
void makeCycle(node*head ,int pos){
    node*temp = head;
    node*startNode;
    int count = 1;
    while(temp->next != NULL){
        if (count == pos){
            startNode= temp;
        }
        temp = temp->next;
        count++;
    }
    temp ->next = startNode;
}
int main (){
    node*head = NULL;
    insert(head,1);
    insert(head,2);
    insert(head,3);
    insert(head,4);
    insert(head,5);
    insert(head,6);
    insert(head,7);
    insert(head,8);
    makeCycle(head, 4);
    display(head);

    return 0;
}