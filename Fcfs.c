#include<stdio.h>
int Positive(int val){
    if(val>=0){
        return val;
    }
    else{
        return val*(-1);
    }
}
void RequestAllocation(int Request[],int head,int n){
    printf("Request allocation order is:");
    printf("%d  ",head);
    int lastAllocated=head;
    int thm=0;
    for(int i=0;i<n;i++){
        printf("%d  ",Request[i]);
        thm=thm+Positive(Request[i]-lastAllocated);
        lastAllocated=Request[i];
    }
    printf("\nthe total head movments is:%d",thm);
}
int main(){
    printf("enter the no of requested tracks");
    int n;
    scanf("%d",&n);
    int Request[n];
    for(int i=0;i<n;i++){
        scanf("%d",&Request[i]);
    }
    printf("enter the initially head at");
    int head;
    scanf("%d",&head);
    RequestAllocation(Request,head,n);
   // 95 180 34 119 11 123 62 64


return 0;
}