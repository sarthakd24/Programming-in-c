//Q138: Print all enum names and integer values using a loop.

#include <stdio.h>

enum TrafficLight { RED, YELLOW, GREEN };

int main() {
    enum TrafficLight light;
    
    for (light = RED; light <= GREEN; light++) {
        if (light == RED) {
            printf("RED=%d\n", light);
        } else if (light == YELLOW) {
            printf("YELLOW=%d\n", light);
        } else if (light == GREEN) {
            printf("GREEN=%d\n", light);
        }
    }
    
    return 0;
}
