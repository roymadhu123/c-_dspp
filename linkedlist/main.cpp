#include <bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node*next;
};
void traverse(struct node*mad){
    while(mad!=NULL){
        cout<<mad->data<<" ";
        mad=mad->next;
    }

}
struct node* insertathead(struct node*mad,int d){
    struct node*pt=(struct node*)malloc(sizeof(struct node));
    pt->data=d;
    pt->next=mad;
   return pt;
    // while(mad!=NULL){
    //     cout<<mad->data<<" ";
    //     mad=mad->next;
    // }
}
 struct node* insertat_index(struct node*mad,int d,int index){
     struct node*pt=(struct node*)malloc(sizeof(struct node));
      struct node*p=mad;
      int i=0;
    while(i!=index-1){
        //point=mad;
        p=p->next;
        i++;
    }
    pt->data=d;
    pt->next=p->next;
    p->next=pt;
    return mad;
 }
 struct node* insertatend(struct node*mad,int d){
     struct node*pt=(struct node*)malloc(sizeof(struct node));
      struct node*p=mad;
      pt->data=d;

    while(p->next!=NULL){
        //point=mad;
        p=p->next;

    }
    p->next=pt;
    pt->next=NULL;

    return mad;
 }

struct node* insertatnode(struct node*mad,struct node*sec,int d){
    struct node*pt=(struct node*)malloc(sizeof(struct node));
     //struct node*p=mad;

   pt->data=d;
   pt->next=sec->next;
   sec->next=pt;
   return mad;
}

int main() {
    struct node*head=(struct node*)malloc(sizeof(struct node));
    struct node*sec=(struct node*)malloc(sizeof(struct node));
    struct node*th=(struct node*)malloc(sizeof(struct node));
    struct node*fo=(struct node*)malloc(sizeof(struct node));
    // struct node*pt=(struct node*)malloc(sizeof(struct node));

    head->data=1;
    head->next=sec;
    sec->data=2;
    sec->next=th;
    th->data=3;
    th->next=fo;
    fo->data=4;
    fo->next=NULL;
    //pt->data=9;
    cout<<"before insertion"<<endl;
    traverse(head);
    cout<<"insertathead"<<endl;
  head= insertathead(head,9);
  traverse(head);
   cout<<"insertat_index"<<endl;
 head=insertat_index(head,9,4);
 traverse(head);
 cout<<"insertatend"<<endl;
  head=insertatend(head,9);
 traverse(head);
  cout<<"insertatnode"<<endl;
 head=insertatnode(head,sec,9);

   traverse(head);

}
