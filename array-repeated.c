#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int fact(int n);

void printRepeating(int arr[], int size)
{
int S = 0; 
int P = 1; 
int x, y;
int D;	
int n = size - 2, i;
for(i = 0; i < size; i++)
{
	S = S + arr[i];
	P = P*arr[i];
}	 

S = S - n*(n+1)/2;
P = P/fact(n);		

D = sqrt(S*S - 4*P); 

x = (D + S)/2;
y = (S - D)/2;

printf("The two Repeating elements are %d & %d", x, y);
}	 

int fact(int n)
{
return (n == 0)? 1 : n*fact(n-1);
} 

int main()
{
int arr[] = {4, 2, 4, 5, 2, 3, 1};
int arr_size = sizeof(arr)/sizeof(arr[0]); 
printRepeating(arr, arr_size);
getchar();
return 0;
}
