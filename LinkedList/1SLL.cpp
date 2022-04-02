// insbeg,insend,inspos,delbeg,delend,delpos,dispaly,length,search,get Nth node,middle_ele,reverse
//del_ele

//inspos, delpos first ele

#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *next;
};
struct node* head=NULL;
void insertBeg(){
    struct node *temp;
    temp =  (struct node *) malloc(sizeof(struct node *));  
    cout<<"Enter the value to Insert:";
    int val;
    cin>>val;
    temp->data=val;
    temp->next=NULL;
    if(head==NULL){
        head=temp;
        return;
    }
    else{
        temp->next=head;
        head=temp;
    }
    return;
}
void  insertEnd(){
    struct node *temp;
    temp =  (struct node *) malloc(sizeof(struct node *));  
    cout<<"Enter the value to Insert:";
    int val;
    cin>>val;
    temp->data=val;
    temp->next=NULL;
    if(head==NULL){
        head=temp;
        return;
    }
    else{
        struct node *ptr=head;
        while (ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        ptr->next=temp;
        
    }
    return;
}

void  insertPos(int pos){
    int val;
    cout<<"Enter value:";
    cin>>val;
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node *));
    temp->data=val;
    temp->next=NULL;
    if(head==NULL){
        head=temp;
        return;
    }
    else{
        struct node *ptr=head;
        while(ptr->next!=NULL&&pos>1)
        {  
          ptr=ptr->next;
          pos--;
        }
        temp->next=ptr->next;
        ptr->next=temp;
    }
    return;
}
void  deleteBeg(){
    if(head==NULL){
        cout<<"No Nodes to delete"<<endl;
        return;
    }
    else{
        struct node *ptr=head;
        head=head->next;
        cout<<ptr->data<<" Deleted Sucessfully"<<endl;
        free(ptr);
    }

}
void  deleteEnd(){
    if(head==NULL){
        cout<<"No Nodes to delete!!"<<endl;
        return;
    }
    else{
        struct node *ptr=head;
        while(ptr->next->next!=NULL){
            ptr=ptr->next;
        }
        cout<<ptr->next->data<<" Data deleted sucessfully"<<endl;
        ptr->next=NULL;
    }
    return;
}

void  deletePos(int pos){
    
    if(head==NULL){
        cout<<"Empty!!!!!"<<endl;
        return;
    }
    else{
        struct node *ptr=head;
        while(ptr->next->next!=NULL&&pos>1)
        {  
          ptr=ptr->next;
          pos--;
        }
        struct node *a=ptr->next;
        ptr->next=ptr->next->next;
        free(a);
        cout<<"deleted!!"<<endl;
    }
    return;
}

void display(){
    if(head==NULL){
        cout<<"empty!"<<endl;
        return;
    }
    else{
        struct node *temp= head;
        cout<<"\n values are: ";
        while(temp!=NULL){
            cout<<temp->data<<"->"<<" ";
            temp=temp->next;
        }
        cout<<"\n\n";
    }

}

void findLength(){
    if(head==NULL){
        cout<<"Length: 0";
        return;
    }
    else{
        int len=0;
        struct node *ptr=head;
        while(ptr!=NULL){
            ptr=ptr->next;
            len++;
        }
         cout<<"Length: "<<len;
    }
}

void nthNode(){
    int n;
    cout<<"Enter the n val:";
    cin>>n;
    if(head==NULL){
        cout<<"Length: 0";
        return;
    }
    else{
        struct node *ptr=head;
        while(ptr->next!=NULL&&n>1){
            ptr=ptr->next;
            n--;
        }
        if(n==1)
            cout<<"Length: "<<ptr->data;
        else
            cout<<"Enter a valid Number"<<endl;
    }
}
void searchEle(){
    if(head==NULL){
        cout<<"Empty";
        return;
    }
    int key;
    cout<<"Enter Key: ";
    cin>>key;
    struct node *ptr=head;
    while(ptr!=NULL){
        if(ptr->data==key){
            cout<<ptr->data<<"Found";
            return;
        }
        ptr=ptr->next;
    }
    cout<<"Not found";
    return;
}

void middleEle(){
    if(head==NULL){
        return;
    }
    struct node *slow=head;
    struct node *fast=head;

    while(fast->next!=NULL&&fast->next->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        cout<<"slow"<<slow->data<<endl;
        cout<<"fast"<<fast->data<<endl;
    }
    cout<<"Middle Ellement is:"<<slow->data<<endl;
}
//incomplete
void deleteEle(){
    if(head==NULL)
    {
        cout<<"Empty!!";
        return;
    }
    int val;
    cout<<"Enter value to del:";
    cin>>val;
    struct node * ptr=head;
    struct node * prev=head;
    if(ptr->data==val){
        deleteBeg();
        return;
    }
    while(ptr!=NULL){
        if(ptr->data==val){
            prev->next=ptr->next;
            cout<<"Value deleted!!";
            return;
        }
        prev=ptr;
        ptr=ptr->next;
    }
}
void reverse(){
    if(head==NULL){
        cout<<"Empty!!"<<endl;
        return;
    }
    struct node* current=head;
    struct node* prev=NULL;
    struct node* next=NULL;
    while(current!=NULL){
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
    }
    head=prev;

}
void intialize(){
    int arr[]={10,20,30,40,50};
    struct node *temp;
    temp =  (struct node *) malloc(sizeof(struct node *));
    temp->data=arr[0];
    temp->next=NULL;
    if(head==NULL){
        head=temp;
    }
    
    struct node *ptr=head;
    for(int i=1;i<5;i++){
        struct node *temp;
        temp =  (struct node *) malloc(sizeof(struct node *));  
        temp->data=arr[i];
        temp->next=NULL;
        ptr->next=temp;
        ptr=temp;
    }
    return;
}

int main(){
    int pos;
    while (1)
    {
        cout<<"\n0:intialize  1:insertbeg 2:insertEnd 3:insertPos 4:deleteBeg 5:deleteEnd 6:deletePos 7:dispaly 8:Length 9:Exit 10:nthNode 11:searchEle 12:middleEle 13:deleteEle 14:reverse\n Enter your choice:";
        int ch;
        cin>>ch;
        switch (ch)
        {
        case 0:
            intialize();
            break;
        case 1:
            insertBeg();
            break;
        case 2:
            insertEnd();
            break;
        case 3:
            cout<<"Enter the position to insert:";
            cin>>pos;
            insertPos(pos);
            break;
        case 4:
            deleteBeg();
            break;
        case 5:
            deleteEnd();
            break;
        case 6:
        int pos;
            cout<<"Enter the position to delete:";
            cin>>pos;
            deletePos(pos);
            break;
        case 7:
            display();
            break;
        case 8:
            findLength();
            break;
        case 9:
            return 0;
            break;
        case 10:
            nthNode();
            break;
        case 11:
            searchEle();
            break;
        case 12:
            middleEle();
            break;
        case 13:
            deleteEle();
            break;
        case 14:
            reverse();
            break;
        default:
        cout<<"Please Enter a valid Option!!!!!!";
            break;
        }

    } 
    return 0;
}

// need to add this
// ptr = (struct node*)malloc(sizeof(struct node));      
//     if(ptr == NULL)  
//     {  
//         printf("\nOVERFLOW");     
//     }  