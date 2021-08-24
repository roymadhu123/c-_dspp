#include <iostream>
using namespace std;
struct node{
    int data;
    struct node*next;
};
void traverse_circular(struct node*head){
    struct node*pt=head;
    do{
        cout<<pt->data<<endl;
        pt=pt->next;
    }while(pt!=head);
    cout<<endl;
}
struct node*insertathead(struct node*head,int d){
    struct node*pt=(struct node*)malloc(sizeof(struct node));
    pt->data=d;
    struct node*p=head->next;
    while(p->next!=head){
        p=p->next;
        //pt=pt->next;
    }
   p->next=pt;
   pt->next=head;
   head=pt;
    return head;

}
int main() {
    struct node*head=(struct node*)malloc(sizeof(struct node));
    struct node*sec=(struct node*)malloc(sizeof(struct node));
    struct node*th=(struct node*)malloc(sizeof(struct node));
    struct node*fo=(struct node*)malloc(sizeof(struct node));
    head->data=1;
    head->next=sec;
    sec->data=2;
    sec->next=th;
    th->data=3;
    th->next=fo;
    fo->data=4;
    fo->next=head;
    cout<<"circular linkedlist before insertion"<<endl;
    traverse_circular(head);
    cout<<"circular linkedlist after insertion at head"<<endl;
     head=insertathead(head,5);
     head=insertathead(head,54);
     head=insertathead(head,53);
   traverse_circular(head);
}
