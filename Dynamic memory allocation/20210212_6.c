/*
Задача 6.8
Заделете динамично с malloc памет за char* buffer с размер size = 2,
въвеждайте символи от конзолата с getchar() ги четете, записвайте ги в
буфера. Увеличавайте размера на буфера преди да се препълни с
realloc().
Прекъснете цикъла с Ctrl + Z. Принтирайте буфера и освободете паметта.
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int c, i=0;
    unsigned int size=2;
    char *buffer = NULL;
    buffer = (char*) malloc(size * sizeof(char));
    if(NULL == buffer)
        exit(1);
    printf("Enter text: ");
    while ((c= getchar())!= EOF){
        buffer[i++] = c;
        if( i == size-1){ /*to leave 1 place for '\0' */
            size= size*2;
            buffer = (char*) realloc(buffer, (size) * sizeof(char));
            if(NULL == buffer)
                exit(2);
            
        }
    }
    buffer[i] = '\0';
    printf("%s", buffer);
    free(buffer);
    return 0;
}
        
