#include <stdio.h>

/*Defineing the node linked list*/
struct node {
    int data; //For holding the data
    struct node *next; // For holding the address of the next node
};
struct node *start=NULL ,/*first element address is NULL */ *q, *t;

int main(){

    int ch;
    /*linked list insertion functions*/
    void insert_beg();
    void insert_end();
    int  insert_pos();
    /*Display function*/
    void display();
    /*linked list item delete function
    void delete_beg();
    void delete_end();
    int  delete_pos();
*/

    /*User Menu*/
    while(1){

        printf("\n\n---Linked List Example---\n\n");
        printf("\n1.Insert\n2.Display\n3.Delete\n4.Exit");
        printf("\n");
        printf("Enter your choice");
        printf("\n");
        scanf("%d",&ch);

        switch(ch){

            case 1:
                    printf("\n---- Insert Menu ----");
                    printf("\n1.Insert at beginning\n2.Insert at end\n3.Insert at specified position\n4.Exit");
                    printf("\n\nEnter your choice(1-4):");
                    scanf("%d",&ch);

                    switch(ch){
                        case 1 : insert_beg();
                                 break;
                        case 2 : insert_end();
                                 break;
                        case 3:  insert_pos();
                                 break;
                        case 4 : exit(0);
                        default: printf("Wroing Choice");
                    }
                    break;
            
            case 2: display();
                    break;
            
            /*case 3: printf("\n\n---Delete Menu---\n\n");
                    printf("\n1.Delete from beginning\n2.Delete from end\n3.Delete from specified position\n4.Exit");
                    printf("\n\nEnter your choice(1-4):");
                    scanf("%d",&ch);

                    switch(ch){

                        case 1: delete_beg();
                                break;
                        case 2: delete_end();
                                break;
                        case 3: delete_pos();
                                break;
                        case 4: exit(0);

                        default: printf("Wrong Choice");
                    }
                    break;
                */
            case 3: exit(0);

            default: printf("Wrong Choice");
            }   
    }
    return 0;
}

void insert_beg(){

    int num;
    t = (struct node*)malloc(sizeof(struct node));
    printf("Enter data");
    printf("\n");
    scanf("%d",&num);

    t->data= num;

    if(start == NULL){
        t->next = NULL;
        start = t;
    }
    else{
        t->next = start;
        start = t;
    }
}

void insert_end(){

    int num;
    t = (struct node*)malloc(sizeof(struct node));
    printf("Enter data to insert at the end of the list");
    printf("\n");
    scanf("%d",&num);

    t->data = num;
    t->next = NULL;

    if(start == NULL){
        start = t;
    }
    else{
        q = start;
        while(q->next!=NULL){
            q = q->next;
            q->next = t;
        }
    }
}

int insert_pos(){

    int pos , i ,num;
    if(start==NULL){
        printf("Linkedlist is empty");
        printf("\n");
        return 0;
    }
    t = (struct node*)malloc(sizeof(struct node));
    printf("Enter data");
    printf("\n");
    scanf("%d",&num);
    printf("Enter the position to insert the data");
    printf("\n");
    scanf("%d",&pos);

    t->data = num;
    q = start;

    for(i=0;i<pos;i++){
        if(q->next==NULL){
            printf("There are not enough element in the list");
            printf("\n");
            return 0;
        }
        q=q->next;
    }

    t->next = q->next;
    q->next = t ;

    return 0;
}

void display(){

    if(start == NULL){
        printf("Nothing to display , list is empty\n");
    }
    else{
        q = start;
        while(q!=NULL){
            printf("%d",q->data);
            q=q->next;
        }
    }
}