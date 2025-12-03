#include <stdio.h>

int main() {
    printf("Name - Rishi Mishra\nSAP_ID - 590028214\nCourse- BCA\nBatch - B5\n");
    printf("--------------------------------\n");

    enum TrafficLight {RED, YELLOW, GREEN};
    enum TrafficLight light;

    for(light = RED; light <= GREEN; light++) {
        switch(light) {
            case RED: printf("RED - Stop\n"); break;
            case YELLOW: printf("YELLOW - Wait\n"); break;
            case GREEN: printf("GREEN - Go\n"); break;
        }
    }

    return 0;
}

