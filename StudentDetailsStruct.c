#include <stdio.h>

#define SIZE 5

struct student_rec
{
	char firstname[11];
	char surname[21];
	int student_ID;
	int results[5];
};

//prototypes

void display(struct student_rec);
void get(struct student_rec *);

int main()
{
	struct student_rec student;
	struct student_rec *ptr;
	
	ptr = &student;
	
	//enter student details
	get(ptr);
	
	//display student details
	display(student);
	return (0);
}


//implement get();
void get(struct student_rec *s_ptr)
{
	int i;
	
	printf("\nEnter Student Details\n");
	printf("Firstname\n");
	scanf("%s", &(s_ptr->firstname));
	printf("\nSurname\n");
	scanf("%s", &(s_ptr->surname));
	printf("\nID\n");
	scanf("%d", &(s_ptr->student_ID));
	printf("\nResults\n");
	
	for(i=0; i<SIZE; i++)
	{
		scanf("%d", &(s_ptr->results[i]));
	}//end for
}//end get

void display(struct student_rec stu)
{
	int i;
	
	printf("\nDetails Entered Are \n");
	puts(stu.firstname);
	puts(stu.surname);
	printf("\nStudent ID is %d\n", stu.student_ID);
	printf("Results are\n\n");
	
	for(i=0; i<SIZE; i++)
	{
		printf("%d\n", stu.results[i]);
	}//end for
}//end get