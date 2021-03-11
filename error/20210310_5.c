
/*
Задача 5.
Напишете функция, принтираща сигналите, които й се подават. 
Обработка на сигнали signal.h (примерът работи само със сигналите на линукс)
*/
#include <stdio.h>
#include <signal.h>
#include <unistd.h>
    
void handleSignal(int iSignal)
{
    printf("\nHandle signal %d\n", iSignal);
}
int main()
{
    signal(SIGABRT, handleSignal);
    signal(SIGINT, handleSignal);
    signal(SIGSEGV, handleSignal);
    for (;;)
    {
        sleep(1);
    }
    return 0;
}