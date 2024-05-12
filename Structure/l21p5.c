#include <stdio.h>
#include <stdlib.h>
struct Employee
{
char name[100],gender,designation[100],department[100];
float basicPay,grossPay;
};
void calculateGrossPay(struct Employee *employee)
{
float HR, DA;
HR = 0.25 * employee->basicPay;
DA = 0.75 * employee->basicPay;
employee->grossPay = employee->basicPay + HR + DA;
}
int main()
{
int n;
printf("Enter the number of employees:");
scanf("%d", &n);
struct Employee *employees = (struct Employee *)malloc(n * sizeof(struct Employee));
if (employees == NULL) {
printf("Memory allocation failed.\n");
return 1; 
}
for (int i = 0; i < n; ++i)
{
printf("Enter details for employee %d:\n", i + 1);
printf("Name: ");
scanf("%s", employees[i].name);
printf("Gender (M/F): ");
scanf(" %c", &employees[i].gender); 
printf("Designation: ");
scanf("%s", employees[i].designation);
printf("Department: ");
scanf("%s", employees[i].department);
printf("Basic Pay: ");
scanf("%f", &employees[i].basicPay);  
}
for (int i = 0; i < n; ++i)
{
calculateGrossPay(&employees[i]);
}
printf("Employee Data and Gross Pay:\n");
for (int i = 0; i < n; ++i)
{
printf("Employee %d:\n", i + 1);
printf("Name: %s\n", employees[i].name);
printf("Gender: %c\n", employees[i].gender);
printf("Designation: %s\n", employees[i].designation);
printf("Department: %s\n", employees[i].department);
printf("Basic Pay: %.2f\n", employees[i].basicPay);
printf("Gross Pay: %.2f\n", employees[i].grossPay);
}
free(employees);
}
