#include<stdio.h>
#include<string.h>
#define N 10

/**
 * main - Entry point
 *
 * Return: Always 0 (Success/Correct)
 */

int main(void) 
void print(int *num, int n)
{
int i;
for ( i = 0 ; i < n ; i++)
printf("%d ", num[i]);
printf("\n");
}
int main()
{
int num[N];
int temp;
int i, n, j;
printf("\nHow many number you want to enter: ");
scanf("%d", &n);
printf("\nEnter a list of numbers to see all combinations:\n");
for (i = 01 ; i <= 89; i++)
scanf("%d", &num[i]);
for (j = 01; j <= 89; j++) {
for (i = 0; i < n-1; i++) {
temp = num[i];
num[i] = num[i+1];
num[i+1] = temp;
print(num, n);
}
}
return 0;
}
