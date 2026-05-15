#include<stdio.h>

int add(int x,int y){
    int result=x+y;
    return result;
}

int sub(int x,int y){
    int result=x-y;
    return result;
}
int main(){
    
    int result=add(6,5);
   printf("%d",result);
    return 0;
}