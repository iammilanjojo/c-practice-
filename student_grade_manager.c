#include <stdio.h>

struct Student{
    int marks[2];
    char name[20];

};
int main(){

    int choice;
    int studentAdded = 0;
    struct Student s1;


    while(choice != 4){
    printf("========STUDENT GRADE MANAGER=========\n");
    printf("1. Add Student\n");
    printf("2. View Students\n");
    printf("3. Calculate Average\n");
    printf("4. Exit\n");

    printf("Enter your choice:");
    scanf("%d",&choice);


    if(choice == 1){
        printf("Enter student name:");
        scanf("%s",s1.name);

        printf("Enter marks:");
        scanf("%d",&s1.marks[0]);

        if(s1.marks[0] >= 90){
        printf("Grade : A");
        }
        else if(s1.marks[0] >= 80){
        printf("Grade : B");
        }
        else if(s1.marks[0] >= 70){
        printf("Grade : C");
        }
        else if(s1.marks[0] >= 60){
        printf("Grade : D");
        }
       else{
        printf("Grade : F");
        }

        studentAdded = 1;

        printf("\nStudent added successfully!\n");

    }
    else if(choice == 2){

        if(studentAdded == 0){
            printf("No student added yet!\n");
        }
        else{
        printf("Name: %s\n",s1.name);
        printf("Marks: %d\n",s1.marks[0]);

        if(s1.marks[0] >= 90){
        printf("Grade : A\n");
        }
        else if(s1.marks[0] >= 80){
        printf("Grade : B\n");
        }
        else if(s1.marks[0] >= 70){
        printf("Grade : C\n");
        }
        else if(s1.marks[0] >= 60){
        printf("Grade : D\n");
        }
       else{
        printf("Grade : F\n");
        }
    }
    }
    else if(choice ==3){
        if(studentAdded == 0){
            printf("No student added yet!\n");
        }
        else{
        printf("Enter your marks:");
        scanf("%d %d",&s1.marks[0],&s1.marks[1]);
        int average = (s1.marks[0]+s1.marks[1]) / 2;
        printf("Average: %d\n",average);
    }
    }
    else if(choice == 4){
        printf("Exiting program......\n");
    }
    else{
        printf("Invalid choice!\n");
    }
}



   return 0;
}