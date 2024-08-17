#include <stdio.h>

struct Student{
    int id;
    char name[20];
    char contact[11];
};

int main(){
    int n =5;
    typedef struct Student stu;
    stu a[n];
    for(int i =0;i<n;i++){
        printf("Enter student id:");
        scanf("%d",&a[i].id);
        printf("Enter student name:");
        scanf("%s",&a[i].name);
        printf("Enter student contact:");
        scanf("%s",&a[i].contact);
    }

    printf("ID\t\tName\t\tContact\n");
    for(int i=0;i<n;i++){
        printf("%d\t\t%s\t\t%s\n",a[i].id,a[i].name,a[i].contact);
    }

}
