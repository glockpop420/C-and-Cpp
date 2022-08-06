#include <stdio.h>
// structure definition
struct Student
{
    // data members
    char name[10];
    int marks;
}; 
// declare an array of the structure Student.
struct Student stu[3];
int i, j; 
// function to read the values
// from the user and print them.
void print()
{
    // read input from the user.
    for (i = 0; i < 3; i++)
    {
        printf("\nEnter the record of Student %d\n", i + 1);
        printf("\nStudent name: ");
        scanf("%s", stu[i].name);
        printf("Enter Marks: ");
        scanf("%d", &stu[i].marks);
    }
    // print the details of each student.
    printf("\nDisplaying Student record\n");
    for (i = 0; i < 3; i++)
    {
        printf("\nStudent name is %s %d", stu[i].name, &stu[i].name);
        printf("\nMarks is %d %d", stu[i].marks, &stu[i].marks);
    }
}
int main()
{
    // function call
    print();
    //printf("\n%d",sizeof(stu));
    return 0;
}
