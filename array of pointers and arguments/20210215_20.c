/*
Задача 20. Дефинирайте стринг „I am a poor programmer”.
Заменете през пойнтер “poor” с “great”.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void replaceWordInText(const char *text, const char *oldWord, const char *newWord) {
   int i = 0, cnt = 0;
   int len1 = strlen(newWord);
   int len2 = strlen(oldWord);
   for (i = 0; text[i] != '\0'; i++) {
      if (strstr(&text[i], oldWord) == &text[i]) {
         cnt++;
         i += len2 - 1;
      }
   }
   char *newString = (char *)malloc(i + cnt * (len1 - len2) + 1);
   i = 0;
   while (*text) {
      if (strstr(text, oldWord) == text) {
         strcpy(&newString[i], newWord);
         i += len1;
         text += len2;
      }
      else
      newString[i++] = *text++;
   }
   printf("New String: %s\n", newString);
}
int main() {
   char str[] = "I ama a poor programming";
   char c[] = "poor";
   char d[] = "great";
   printf("Original string: %s\n", str);
   replaceWordInText(str, c, d);
   return 0;
}