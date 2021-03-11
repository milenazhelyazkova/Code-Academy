/*
ЗЗадача 7.
Напишете програма, която обработва Ctrl+C
Ctrl+D, Ctrl+Z
*/
#include<stdio.h>
#include<signal.h>

void sleep(int);
void sig_handler(int signo)
{
    if (signo == SIGINT)
        printf("you pressed Ctr+C\n");
}
void sig_handler2(int signo)
{
    if (signo == SIGTSTP)
        printf("you pressed Ctr+Z\n");
}
int main(void)
{
    signal(SIGINT, sig_handler);
    signal(SIGTSTP, sig_handler2);
    // Just to testing purposes
    while(1)
        sleep(1);
    return 0;
}