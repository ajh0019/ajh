#include <stdio.h>
#include <ctype.h>

int main() {
    char word[1000001];
    scanf("%s", word);

    int letter_count[26] = {0};

    for (int i = 0; word[i] != '\0'; i++) {
        char c = toupper(word[i]);
        if ('A' <= c && c <= 'Z') { 
            letter_count[c - 'A']++;
        }
    }

    int max_count = 0;
    char most_frequent_letter = '?';
    for (int i = 0; i < 26; i++) {
        if (letter_count[i] > max_count) {
            max_count = letter_count[i];
            most_frequent_letter = 'A' + i;
        } else if (letter_count[i] == max_count) {
            most_frequent_letter = '?';
        }
    }

    printf("%c\n", most_frequent_letter);

    return 0;
}
