#include <stdio.h>

int main() {printf("Name - Rishi Mishra\nSAP_ID - 590028214\nCourse- BCA\nBatch - B5\n");
 printf("--------------------------------\n"); 
    float R,area, circumference;

    printf("Enter the area of the circle: ");
    scanf("%f", &R);

    
    area= (3.14*R*R);
    circumference =2*3.14*R;

    
    printf("Area of the circle: %f\ncircumference of the circle: %f", area,circumference );
  

    return 0;
    
}
