#include<stdio.h>
#include<string.h>
struct stack{

    int size;
    int items[100];
 
};

void push(struct stack *pt, int x){
    if(pt->size == 100) return;
    pt->size++;
    pt->items[(pt->size)-1] = x;
}

int pop(struct stack *pt){
    int temp;
    temp =  pt->items[(pt->size)-1];
    pt->items[(pt->size)-1] = '\0';
    pt->size--;
    printf("%d\n", temp);
    return temp;
} 



int isEmpty(struct stack *pt){
 if(pt->size==0){
    printf("Empty\n");
    return 1;
 }
 else{
    printf("Not Empty\n");
    return 0;
 }

} 
int peek(struct stack *pt){
    if(isEmpty(pt))
    {
        printf("Empty\n");
        return 0;
    }
    printf("%d\n",pt->items[(pt->size)-1]);
    return pt->items[(pt->size)-1];
}

int main(){
    
    int count,i,k,j;
    char takenByUser[10];
    char operationName[10];
    
    struct stack stack1;
    stack1.size = 2;
    stack1.items[0]= 0;
    stack1.items[1]= 1; 
    printf("how many fonctions you want to call ");
    scanf("%d",&count);
    printf("%d\n",count);
    for(i=0;i<=count;i++){
        scanf("%s",takenByUser);//enter function name
       
        
        if(strcmp(takenByUser, "peek") == 0){
            peek(&stack1);
        } 
         if(strcmp(takenByUser, "isEmpty") == 0){
            isEmpty(&stack1);
            
        } 
         if(strcmp(takenByUser,"push") ==0 ){
            int sayi;
            scanf("%d",&sayi);
            push(&stack1,sayi);
            
        } 

         if(strcmp(takenByUser,"pop")==0){
            pop(&stack1);
            
        } 
    
    
    
}
return 0;
}
