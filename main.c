#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdint.h>

int JMP(int CN,uint8_t ADDR);

#include "function_dec.c"
#include "register.c"
#include "instruction.c"
#include "structure.c"
//#define DEBUG_MODE

#ifdef DEBUG_MODE
    #define DEBUG_PRINT(fmt,...) printf("[DEBUG] "fmt,__VA_ARGS__)
#else
    #define DEBUG_PRINT(fmt,...)
#endif

int main(int argc, char *argv[])
{
    DEBUG_PRINT("You have enter no of %d arguments\n",argc - 1);

    if(argc >= 2)
    {
        for(int i =1;i< argc;i++)
        {
            DEBUG_PRINT("%s\n",argv[i]);
        }
    }
    return 0;
}