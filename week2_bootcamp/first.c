#include<stdio.h>

int main() {
    float temperature;
        printf ("What is the Temperature Today?\n");
        scanf("%f", &temperature);

    if (temperature > 20) {
        printf("Its nice and warm, no need for a jacket today.\n");
    }
     else if (temperature > 10) {
        printf("Its not too cold today, leaving without a jacket should be fine.\n");
    }
    else
        printf("Its cold, take a jacket with you\n");
    return 0;
}

