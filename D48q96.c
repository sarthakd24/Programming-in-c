// Q96: Reverse each word in a sentence without changing the word order.
#include <stdio.h>

void reverseWord(char str[], int start, int end) {
    char temp;
    while (start < end) {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char sentence[200];
    int i = 0, word_start = 0;

    printf("Enter the sentense: ");
    scanf(" %[^\n]", sentence);

    while (1) {
        
        if (sentence[i] == ' ' || sentence[i] == '\0') {
            reverseWord(sentence, word_start, i - 1);
            word_start = i + 1;
        }
        if (sentence[i] == '\0') {
            break;
        }
        i++;
    }

    printf("%s\n", sentence);

    return 0;
}

