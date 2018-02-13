#include <iostream>
using namespace std;
class linklist{
    struct node{
        int data;
        node *next;
    };
    node *start,*temp,*newnode,*temp1;
    int data1,num,num1,num2;
    node *a[20];
public:
    linklist(){
        start=NULL;
    }
    void enter_data();
    void display();
    void nthnode();
    void nthnode_last();
};
void linklist::enter_data(){
    cout<<"Enter the number of nodes:-";
    cin>>num;
    for(int i=0;i<num;i++){
        cout<<"\nEnter the data:-";
        cin>>data1;
        if(start == NULL){
            start = new node;
            start->data = data1;
            start->next = NULL;
        }
        else{
            temp = start;
            while(temp->next != NULL){
                temp = temp->next;
            }
            newnode = new node;
            newnode->data = data1;
            newnode->next = NULL;
            temp->next = newnode;
        }
    }
}
void linklist::display(){
    temp = start;
    for(int i=0;i<num;i++){
        a[i] = temp;   //pushing the address of each node to into array
        cout<<a[i]->data<<"\t";
        temp=temp->next;
    }
}
//excising a node value directly
void linklist::nthnode(){
    cout<<"\nEnter number of node to display:-";
    cin>>num1;
    cout<<a[num1-1]->data;
}
//excising a node value from last by calculating its length
void linklist::nthnode_last(){
    cout<<"\nEnter number of node to display from last:-";
    cin>>num2;
    num1=num-num2;
    temp=start;
    for(int i=0;i<num1;i++){
        temp=temp->next;
    }
    cout<<temp->data;
}
int main()
{
    linklist l;
    l.enter_data();
    l.display();
    l.nthnode();
    l.nthnode_last();
}

