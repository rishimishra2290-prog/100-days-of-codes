#include <stdio.h>
#include <math.h>  

int main() {printf("Name - Rishi Mishra\nSAP_ID - 590028214\nCourse- BCA\nBatch - B5\n");
 printf("--------------------------------\n"); 
    float principal, rate, time;
    float simpleInterest, compoundInterest;

  
    printf("Enter Principal Amount: ");
    scanf("%f", &principal);

    printf("Enter Rate of Interest: ");
    scanf("%f", &rate);

    printf("Enter Time: ");
    scanf("%f", &time);

    simpleInterest = (principal * rate * time) / 100;

    compoundInterest = principal * (pow((1 + rate / 100), time) - 1);
    
    printf("Simple Interest  = %f\n", simpleInterest);
    printf("Compound Interest = %f\n", compoundInterest);

    return 0;
}

