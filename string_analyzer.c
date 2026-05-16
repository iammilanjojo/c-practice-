#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char str[100];
    int vowels = 0 , consonants = 0  , spaces = 0 , special = 0 , digits = 0 , upper = 0 , lower = 0;
    int i = 0;
    int palindrome = 1;
    

    printf("Enter a string : ");
    fgets(str,sizeof(str),stdin);
    str[strlen(str) - 1] = '\0';

    int n =strlen(str);

    printf("Length of the string : %d\n",n);


    while(str[i] !='\0'){
       if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U'){
        vowels++;
       }
       else if(isspace(str[i])){
        spaces++;
       }
       else if(ispunct(str[i])){
         special++;
       }
       else if(isdigit(str[i])){
        digits++;
       }
      if(isupper(str[i])){
          upper++; 
        }
      if(islower(str[i])){
        lower++;
        }
       else{
        consonants++;
       }
       i++;
    }
    printf("Number of Vowels : %d\n",vowels);
    printf("Number of Consonants : %d\n",consonants);
    printf("Number of Digits : %d\n",digits);
    printf("Number of Uppercase alphabets : %d\n",upper);
    printf("Number of Lowercase alphabets : %d\n",lower);
    printf("Number of Special Characters : %d\n",special);
    printf("Number of Spaces : %d\n",spaces);

    int j = n - 1;

    while(i<j){
       if(str[i] != str[j]){
        palindrome = 0;
        break;
       }
       i++;
       j--;
    }
    if(palindrome == 1){
       printf("String is a palindrome\n");
    }
    else{
      printf("String is not a palindrome\n");
    }

return 0;
}