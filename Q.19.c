#include <stdio.h>

int main() {printf("Name - Rishi Mishra\nSAP_ID - 590028214\nCourse- BCA\nBatch - B5\n");
 printf("--------------------------------\n"); 
    float side1, side2, side3;

    printf("Enter three sides of the triangle: ");
    scanf("%f %f %f", &side1, &side2, &side3);
    
    if ((side1 + side2 > side3) && (side2 + side3 > side1) && (side1 + side3 > side2)) {
        
        if (side1 == side2 && side2 == side3) {
            printf("The triangle is Equilatera\n");
        } 
        else if (side1 == side2 || side2 == side3 || side1 == side3) {
            printf("The triangle is Isosceles\n");
        } 
        else {
            printf("The triangle is Scalene\n");
        }

    } else {
        printf("The given sides do not form a valid triangle\n");
    }

    return 0;
}

