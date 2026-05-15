#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int a = 0;
    srand(time(0));
    int n = rand() % 100 + 1;

    

    printf("Guess a number: ");
    scanf("%d",&a);


    while(a != n){
        if(a>n){
        printf("Number is too high!\n");
        }
    
    else{
        printf("Number is too low!\n");
    }
        printf("Guess again: ");
        scanf("%d",&a);
       
    }
        printf("Hurray! You've guessed correctly!");
    
    return 0;
}