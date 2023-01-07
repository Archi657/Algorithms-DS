#include <iostream>

using namespace std;

struct node{
    int data;
    node* next;
};

struct node* head;
void Insert(int x);
void Print();
void Menu();
int main() {
    //node* head;
    head = NULL;
    cout << "How many numbers\n" ;
    int n,i,x;
    scanf("%d",&n);
    for(i = 0; i<n; i++){
        if (i==0) cout << "Enter numbers\n";
        else cout << " " ;
        scanf("%d",&x);
        Insert(x);
    }
    Print();
    return 0 ;
}

void Insert(int x) {
    //creates a node with the value asigned, and next = NULL, at this moment there is no reference towards him
    node* value = new node();
    value->data = x ;
    value->next = NULL;
    if(head == NULL){
        head = value; // there is not a head created yet, or any value, therefore new value is the 1st/head
    }else{
        node* temp = new node();
        temp = head;
        while(temp->next != NULL){ //iterates from head to the last value which points to NULL, to make him point to the new value old[3] -> new[x]
            temp = temp->next;
        }
        temp->next = value ;
    }
}

void Print(){
    node* temp = new node();
    temp = head;
    while(temp !=NULL){
        cout<< " [" << (temp->data) << "] ->";
        temp = temp->next;
    }
    cout << " NULL\n";
}
