#include <stdio.h>

#include <COMiC/env.h>

int main()
{
    if (COMiC_Init())
    {
        printf("something went wrong");
    }
    printf("hello world!");
    COMiC_Finalize();
}