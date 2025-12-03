#include <stdio.h>

int main() {printf("Name - Rishi Mishra\nSAP_ID - 590028214\nCourse- BCA\nBatch - B5\n");
 printf("--------------------------------\n"); 
    float costPrice, sellingPrice, profit, loss, percentage;
    printf("Enter Cost Price: ");
    scanf("%f", &costPrice);

    printf("Enter Selling Price: ");
    scanf("%f", &sellingPrice);

    // Check for profit, loss, or no profit/loss
    if (sellingPrice > costPrice) {
        profit = sellingPrice - costPrice;
        percentage = (profit / costPrice) * 100;
        printf("You made a profit of %2f (%2f%)\n", profit, percentage);
    } 
    else if (sellingPrice < costPrice) {
        loss = costPrice - sellingPrice;
        percentage = (loss / costPrice) * 100;
        printf("You incurred a loss of %2f (%2f%)\n", loss, percentage);
    } 
    else {
        printf("No profit, no loss\n");
    }

    return 0;
}

