#include<stdio.h>
int main(){
    float basicSalary;
    printf("Enter the Basic Salary: ");
    scanf("%f", &basicSalary);
    
    float medical = (4*basicSalary)/100;
    float hra = (10*basicSalary)/100;
    float da = (50*basicSalary)/100;
    float grossSalary = basicSalary + da + hra + medical;
    float pf = (5*grossSalary)/100;
    float insurance = (7*grossSalary)/100;
    float deduction = insurance + pf;

    float netSalary = grossSalary - deduction;

    printf("The Net Salary of employee is: %.0f", netSalary);
}