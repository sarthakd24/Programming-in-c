// Q132: Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.
#include <stdio.h>

enum traffic_light { RED, YELLOW, GREEN };

int main() {
    enum traffic_light light;
    char input[10];

    // Read the light name as string
    scanf("%s", input);

    // Map string to enum value
    if (strcmp(input, "RED") == 0) {
        light = RED;
    } else if (strcmp(input, "YELLOW") == 0) {
        light = YELLOW;
    } else if (strcmp(input, "GREEN") == 0) {
        light = GREEN;
    } else {
        printf("Invalid input\n");
        return 1;
    }

    // Print action based on enum value
    switch (light) {
        case RED:
            printf("Stop\n");
            break;
        case YELLOW:
            printf("Wait\n");
            break;
        case GREEN:
            printf("Go\n");
            break;
    }

    return 0;
}


