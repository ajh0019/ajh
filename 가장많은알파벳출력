#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main() {
   char str1[1000] = "\0";
   int str2[100] = { '\0' };
   int len;
   int n = 0;
   int i = 0;
   int cnt = 0;

   scanf("%s", str1);
   len = strlen(str1);

   for (int i = 0; i < len; i++) {
      if (islower(str1[i])) {
         str1[i] -= 32;
      }
   }
   for (int i = 0; i < len; i++) {
      for (int j = 65; j <= 90; j++) {
         if (str1[i] == j) {
            str2[j - 65]++;
         }
      }
   }

   int max = str2[0];
   while (1) {
      if (str2[i] > max) {
         max = str2[i];
         n = i;
         cnt = 0;
      }
      else if (str2[i] == max && i != 0) {
         cnt++;
      }
      else if (i == 25 && cnt != 0) {
         printf("?");
         break;
      }
      else if (i == 25) {
         printf("%c", n + 65);
         break;
      }
      i++;
   }
}
