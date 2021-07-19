/*
Name: Gagan Deep Goru
Roll Number: EE19B023
Operating System used: Ubuntu 20.04
Compilation instructions:
	
	arm-linux-gnueabi-gcc -g -static -o executable main.c fun1.s fun2.s
	./executable
	
Prints the index which minimises the sum.
fun1.s contains the function for Question 1 and fun2.s contains the function for Question 2
Details regarding the algorithm and count of clock cycles are provided in the report
*/
#include <stdio.h>
#include <stdlib.h>
int A[10]={1,2,3,4,5,6,7,8,9,10};
int n = 10;
int q1_fun(int *v, int n);
int q2_fun(int *v, int n);
int main(){
	int ans1 = q1_fun(A, n);
	int ans2 = q2_fun(A, n);
	printf("%d\n", ans1);
	printf("%d\n", ans2);
}
