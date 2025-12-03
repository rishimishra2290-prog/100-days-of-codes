#include <stdio.h>

int main() {printf("Name - Rishi Mishra\nSAP_ID - 590028214\nCourse- BCA\nBatch - B5\n");
 printf("--------------------------------\n"); 
    float length, breadth, area, perimeter;

    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);

    printf("Enter the breadth of the rectangle: ");
    scanf("%f", &breadth);
    
    area = length * breadth;
    perimeter = 2 * (length + breadth);

    
    printf("Area of the rectangle: %f\nPerimeter of the rectangle: %f", area,perimeter);
  

    return 0;
    
}
