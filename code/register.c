#define CARRY_F 1
#define ZERO_F 0
#define NOT_TEST_F 2

typedef struct IO_PINS
{
    /* data */
    short D;
    int VSS;
    int CLK_1;
    int CLK_2;
    int SYNC_OUT;
    short RAM_CONTROL;
    int VDO;
    int CM_ROM;
    int TEST;
    int RESET;
}EX_PINS;

typedef union PROGRAM_COUNTER
{
    uint16_t T;
    struct bits
    {
    uint8_t PH : 4;
    uint8_t PM : 4;
    uint8_t PL : 4;
    uint8_t reserved : 4;
    }bits;

}PROGRAM_COUNTER;




typedef struct  REGISTER
{
    /* data */
    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R7;
    int R8;
    int R9;
    int R10;
    int R11;
    int R12;
    int R13;
    int R14;
    int R15;
}REGISTER;


EX_PINS pins = {0};

typedef struct MEM
{
    /* data */
    int FLAG[3];
    int FLIP_FLOPS;
    int DECIMAL_ADJ;
    int DATA_BUS;
}MEM;

typedef struct STACK
{
    PROGRAM_COUNTER PC;
    uint16_t L1;
    uint16_t L2;
    uint16_t L3;
    uint8_t SP;
     
}STACK;


int IR = 0x0;
PROGRAM_COUNTER PC = {0};
uint16_t SRC_REG = 0x0;

MEM main_mem = {0}; 
REGISTER reg = {0};