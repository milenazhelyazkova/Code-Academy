/*
Задача 14.
Напишете програма, която да проверява дали 2 стринга (масива) са
анаграми и имат всичките букви на другата дума. Използвайте функции.
Примери за анаграми: реклама: карамел; босилек: обелиск.
*/
#include <stdio.h>

int check_anagram(char[], char[]);

int main()
{
    char a[100], b[100];

    printf("Enter two words\n");
    gets(a);
    gets(b);

    if (check_anagram(a, b))
        printf("The strings are anagrams.\n");
    else
        printf("The strings aren't anagrams.\n");

    return 0;
}

int check_anagram(char a[], char b[])
{
    int first[26] = {0}, second[26] = {0}, i = 0;

    /* Calculating frequency of characters of the first string */

    while (a[i] != '\0')
    {
        first[a[i] - 'a']++;
        i++;
    }
    i = 0;

    while (b[i] != '\0')
    {
        second[b[i] - 'a']++;
        i++;
    }

    /* Comparing the frequency of characters */

    for (i = 0; i < 26; i++)
        if (first[i] != second[i])
            return 0;

    return 1;
}