#include <stdio.h>
#include <math.h>  // For sqrt() function

int main() {printf("Name - Rishi Mishra\nSAP_ID - 590028214\nCourse- BCA\nBatch - B5\n");
 printf("--------------------------------\n"); 
    float a, b, c;
    float discriminant, root1, root2, realPart, imaginaryPart;

    printf("Enter coefficients a, b, and c: ");
    scanf("%f %f %f", &a, &b, &c);

    // Check if it's a valid quadratic equation
    if (a == 0) {
        printf("This is not a quadratic equation \n");
    } else {
        // Calculate discriminant (D = b² - 4ac)
        discriminant = b * b - 4 * a * c;

        // Check the nature of roots
        if (discriminant > 0) {
            // Real and distinct roots
            root1 = (-b + sqrt(discriminant)) / (2 * a);
            root2 = (-b - sqrt(discriminant)) / (2 * a);
            printf("Roots are real and distinct.\n");
            printf("Root 1 = %2f\nRoot 2 = %2f\n", root1, root2);
        }
        else if (discriminant == 0) {
            // Real and equal roots
            root1 = root2 = -b / (2 * a);
            printf("Roots are real and equal.\n");
            printf("Root 1 = Root 2 = %2f\n", root1);
        }
        else {
            // Imaginary roots
            realPart = -b / (2 * a);
            imaginaryPart = sqrt(-discriminant) / (2 * a);
            printf("Roots are imaginary (complex)\n");
            printf("Root 1 = %2f + %2fi\n", realPart, imaginaryPart);
            printf("Root 2 = %2f - %2fi\n", realPart, imaginaryPart);
        }
    }

    return 0;
}

