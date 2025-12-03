#include<stdio.h>
int main() {printf("Name - Rishi Mishra\nSAP_ID - 590028214\nCourse- BCA\nBatch - B5\n");
 printf("--------------------------------\n"); 
	int sum,n;
	printf("enter number till where you want to find sum: ");
	scanf("%d",&n);
	
	sum = (n*(n+1))/2;
	
	printf("sum of numbers are: %d\n",sum);
	
	return 0;
}
