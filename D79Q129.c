//Q129: A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both.

#include <stdio.h>

int main() {
    FILE *file = fopen("numbers.txt", "r");
    if (file == NULL) {
        printf("Error: Cannot open numbers.txt\n");
        return 1;
    }

    int x;
    long long sum = 0;
    int count = 0;

    /* Read all integers until EOF */
    while (fscanf(file, "%d", &x) == 1) {
        sum += x;
        count++;
    }

    fclose(file);

    if (count == 0) {
        printf("No integers found in file.\n");
        return 0;
    }

    double avg = (double)sum / count;

    printf("Sum = %lld\n", sum);
    printf("Average = %.2f\n", avg);

    return 0;
}
