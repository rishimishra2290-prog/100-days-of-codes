#include<stdio.h>
int main(){printf("Name - Rishi Mishra\nSAP_ID - 590028214\nCourse- BCA\nBatch - B5\n");
 printf("--------------------------------\n"); 
	int x,y;
	printf("enter first number: ");
	scanf("%d",&x);
	printf("enter second number: ");
	scanf("%d",&y);
	
	x=x^y;
	y=x^y;
	x=x^y;
	
	printf("swapped number is: %d\n and %d\n",x,y);
	return 0;
}
