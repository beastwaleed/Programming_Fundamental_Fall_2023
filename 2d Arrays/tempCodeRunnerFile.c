#include <stdio.h>

int main() {
	int students, student_number[students], class[students];
	char student_name[students], father_name[students];
	
	printf("Enter number of students: ");
	scanf("%d", &students);
	
	for (int i = 0; i < students; i++) {
	
		printf("Enter student number: ");
		scanf("%d", &student_number[i]);
		
		printf("Enter name: ");		
		scanf(" %[^\n]s", &student_name[i]);
		
		printf("Enter father's name: ");
		scanf(" %[^\n]s", &father_name[i]);
		
		printf("Enter class: ");
		scanf("%d", &class[i]);
		
		printf("\n");
	}
	
	

	return 0;
}