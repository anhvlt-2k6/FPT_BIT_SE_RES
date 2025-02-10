/*
* This program is created by Vo Luu Tuong Anh (github.com/anhvlt-2k6)
* It programmed as the experiment of C/C++ Standard of Clean Code for Human and Low-level Scripting On-source (CCHLSS) 
* Sponsored by TheFlightSims (https://theflightsims.com) 
*/


#include <stdio.h>
#include <stdlib.h>

#define ADDITION_OF_ONE_DOT_FIFTEEN 0.00000002384185782133840802998747676610946655273437500

float inputSalary() {
	int salaryInput;
	printf("Enter the basic salary (>= 0): ");
	scanf("%d", &salaryInput);
	while (salaryInput < 0) {
		printf("Invalid salary. Please enter a non-negative value.\nEnter the basic salary (>= 0): ");
		scanf("%d", &salaryInput);
	}
	
	return salaryInput;
}

float calculateAllowance (float basic_salary) {
	if (basic_salary < 6000000) {
		return 1.25;
	} else if (basic_salary >= 6000000 && basic_salary <= 15000000) {
		return 1.15;
	} else {
		return 1.10;
	}
}

float calculateTax (float total_income) {
	if (total_income <= 8000000) {
		return 0;
	} else {
		return 0.1 * (total_income - 8000000) ;
	}
}

float caluclateNetIncome(float basic_salary, float allowance, float tax) {
	return basic_salary * allowance - tax;
}

int main() {
	// Step 1: Initialize variables used in the pr
	int num_employees;
	float total_income, basic_salary, allowance, tax, employee_net_income;
	float total_salary_cost = 0;
	int count_25 = 0, count_15 = 0, count_10 = 0;
	
	// Step 2: Input the number of employees
	printf("Enter the number of employees: ");
	scanf("%d", &num_employees);
	
	// Step 3: Validate input number of employees. If numberOfEmpLoyees < 1 then exit the program
	if (num_employees < 1) {
		system("exit");
	}
	
	// Step 4: Prcess each employees
	for (int i = 0; i < num_employees; i++) {
		printf("\nProcessing employee %d:\n", i + 1);
		
		// Call function to Input basic salary
		basic_salary = inputSalary();
		
		// Call function Calculate allowance
		allowance = calculateAllowance(basic_salary);
		
		// Count allowance category
		if (allowance == 1.25) {
			count_25 += 1;
		} else if (allowance + ADDITION_OF_ONE_DOT_FIFTEEN == 1.15) {
			count_15 += 1;
		} else {
			count_10 += 1;
		}
		
		// Calculate total income and Call function to calculate tax
		total_income = basic_salary * allowance;
		tax = calculateTax(total_income);

		// Call function to Calculate net income
		employee_net_income = caluclateNetIncome(basic_salary, allowance, tax);
		
		// Update total salary cost
		total_salary_cost += employee_net_income;
		
		// Display employee details
		printf(
		"Basic Salary: %.2f\n"
		"Allowance: %.2f\n"
		"Tax Deduction: %.2f\n"
		"Net Income: %.2f\n",
		basic_salary,
		total_income - basic_salary,
		tax,
		employee_net_income
		);
	}
	
	// Step 5: Display Salary Statistics
	printf(
	"\n=== Salary Statistics ===\n"
	"Total salary cost of the company: %.2f\n"
	"Number of employees with allowance of 25%: %d\n"
	"Number of employees with allowance of 15%: %d\n"
	"Number of employees with allowance of 10%: %d\n",
	total_salary_cost,
	count_25,
	count_15,
	count_10
	);
		
	system("pause");
	return 0;
}