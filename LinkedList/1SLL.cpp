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
        while (pos>1)
        {
           if(ptr == NULL)  
            {  
                printf("\ncan't insert\n");  
                return;  
            }  
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
        while (pos>1)
        {
             if(ptr == NULL)  
            {  
                printf("\ncan't delete1\n");  
                return;  
            }  
          ptr=ptr->next;
          pos--;
        }
        struct node *a=ptr->next;
        ptr->next=ptr->next->next;
        free(a);
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
        cout<<"\n\n\n\n";
    }

}

int main(){
    int pos;
    while (1)
    {
        cout<<"\n1:insertbeg\n 2:insertEnd\n 3:insertPos\n 4:deleteBeg\n 5:deleteEnd\n 6:deletePos\n 7:dispaly\n 8:Exit \n Enter your choice:";
        int ch;
        cin>>ch;
        switch (ch)
        {
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
            return 0;
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