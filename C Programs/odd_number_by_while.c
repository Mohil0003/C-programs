#include<stdio.h>
void main(){
    int n,i=1;
    printf("Enter N : ");
    scanf("%d", &n);
    while(i<=n){
        if(i%2!=0){
            printf("%d ", i);
        } i++;
    }

}