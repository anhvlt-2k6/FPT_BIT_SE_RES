/*
* This program is created by Vo Luu Tuong Anh (github.com/anhvlt-2k6)
* It programmed as the experiment of C/C++ Standard for HCI (TheFlightSims CHS)
* Sponsored by TheFlightSims (https://theflightsims.com) 
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	// Step 1: Initialize variabLes used in the program
	int numberOfStudent; // Initialize of number of Students
	int passedStudents = 0, failedStudents = 0; // Count students who passed and failed
	int totalScore = 0; // Sum of all score in the class

	// Step 2: Use a while Loop to input the number of students
	 
	//	Frist try of entering values
	printf("Enter the number of students (>=1): ");
	scanf("%d", &numberOfStudent);
	
	// Retry if the variable does not meet the requirements 
	while (numberOfStudent < 1) {
		printf("Invaild number of students. Please try again.\nEnter the number of students (>=1): ");
		scanf("%d", &numberOfStudent);
	}
	
	// Initialize the students score
	int studentScore[numberOfStudent];
	
	// Step 3: Use a for Loop to input scores and process each student
	for (int i = 0; i < numberOfStudent; i++) {
		
		//	Frist try of entering values
		printf("Enter the score for student %d: ", i + 1);
		scanf("%d", &studentScore[i]);
		
		// Retry if the variable does not meet the requirements
		while (studentScore[i] < 0 || studentScore[i] > 10) {
			printf("Invaild score. Please try again.\nEnter the score for student %d: ", i + 1);
			scanf("%d", &studentScore[i]);
		}
		
		// Sum in the total score
		totalScore += studentScore[i];
		
		// Calculate who pass and who not
		if (studentScore[i] >= 5) {
			passedStudents += 1;
		} else {
			failedStudents += 1;
		}
	}

	// Step 4: Calculate the average score
	// Skipped in step 3


	// Step 5: Display the statistics
	printf(
	"\nStatistics:\n"
	"Total score of the class: %d\n"
	"Average score of the class: %.2lf \n"
	"Number of students who passed (>= 5): %d\n"
	"Number of students who failed (< 5): %d\n",
	totalScore,
	(double)totalScore/numberOfStudent,
	passedStudents,
	failedStudents
	);
	
	system("pause");
	return 0;
}