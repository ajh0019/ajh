#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[25];
    char plaintext_char;
    char key_char;
    char dkagh[25];
    char key[25];
    int len;
    int key_len;

    printf("평문: ");
    scanf("%s", str);
    len = strlen(str);

    printf("\n키: ");
    scanf("%s", key);
    key_len = strlen(key);

    for (int i = 0; i < len; i++) {
        plaintext_char = str[i];
        key_char = key[i % key_len];

        plaintext_char -= 'A';
        key_char -= 'A';

        dkagh[i] = ((key_char + plaintext_char) % 26) + 'A';
    }

    dkagh[len] = '\0';
    printf("암호문: %s\n", dkagh);
    return 0;
}
