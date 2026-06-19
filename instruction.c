#include <stdint.h>

//#include "register.c"

int FETCH_IN(int ROM)
{
    IR = ROM_READ(PC.T);
    PC.T++;
    return 0;
}

int DECODE()
{
    uint8_t CN = 0;
    uint16_t addr = 0;
    switch ((IR))
    {
    case 0x10:
        //JCN CN = 0
        CN = 0;
        FETCH_IN(PC.T);
        addr = IR;
        JMP(CN,addr);
        break;
    case 0x11:
        //JCN CN = 1 also JNT
        CN = 1;
        FETCH_IN(PC.T);
        addr = IR;
        JMP(CN,addr);
        break;
    case 0x12:
        //JCN CN = 2 also JC
        CN = 2;
        FETCH_IN(PC.T);
        addr = IR;
        JMP(CN,addr);
        break;
    case 0x13:
        //JCN CN = 3
        CN = 3;
        FETCH_IN(PC.T);
        addr = IR;
        JMP(CN,addr);
        break;
    case 0x14:
        //JCN CN = 4
        CN = 4;
        FETCH_IN(PC.T);
        addr = IR;
        JMP(CN,addr);
        break;
    case 0x15:
        //JCN CN = 5
        CN = 5;
        FETCH_IN(PC.T);
        addr = IR;
        JMP(CN,addr);
        break;
    case 0x16:
        //JCN CN = 6
        CN = 6;
        FETCH_IN(PC.T);
        addr = IR;
        JMP(CN,addr);
        break;
    case 0x17:
        //JCN CN = 7
        CN = 7;
        FETCH_IN(PC.T);
        addr = IR;
        JMP(CN,addr);
        break;
    case 0x18:
        //JCN CN = 8
        CN = 8;
        FETCH_IN(PC.T);
        addr = IR;
        JMP(CN,addr);
        break;
    case 0x19:
        //JCN CN = 9
        CN = 9;
        FETCH_IN(PC.T);
        addr = IR;
        JMP(CN,addr);
        break;
    case 0x1A:
        //JCN CN = 10
        CN = 10;
        FETCH_IN(PC.T);
        addr = IR;
        JMP(CN,addr);
        break;
    case 0x1B:
        //JCN CN = 11
        CN = 11;
        FETCH_IN(PC.T);
        addr = IR;
        JMP(CN,addr);
        break;
    case 0x1C:
        //JCN CN = 12
        CN = 12;
        FETCH_IN(PC.T);
        addr = IR;
        JMP(CN,addr);
        break;
    case 0x1D:
        //JCN CN = 13
        CN = 13;
        FETCH_IN(PC.T);
        addr = IR;
        JMP(CN,addr);
        break;
    case 0x1E:
        //JCN CN = 14
        CN = 14;
        FETCH_IN(PC.T);
        addr = IR;
        JMP(CN,addr);
        break;
    case 0x1F:
        //JCN CN = 15
        CN = 15;
        FETCH_IN(PC.T);
        addr = IR;
        JMP(CN,addr);
        break;
    case 0x20:
        //FIM R0 R1
        FETCH_IN(PC.T);
        CN =  IR;
        FIM(reg.R0,reg.R1,CN);
        break;
    case 0x21:
        //SRC  R0R1
        FETCH_IN(PC.T);
        CN =  IR;
        SRC(reg.R0,reg.R1);
        break;
    case 0x22:
        //FIM R2R3
        FETCH_IN(PC.T);
        CN =  IR;
        FIM(reg.R2,reg.R3,CN);
        break;
    case 0x23:
        //SRC R2R3
        FETCH_IN(PC.T);
        CN =  IR;
        SRC(reg.R2,reg.R3);
        break;
    case 0x24:
        //FIM R4R5
        FETCH_IN(PC.T);
        CN =  IR;
        FIM(reg.R4,reg.R5,CN);
        break;
    case 0x25:
        //SRC R4R5
        FETCH_IN(PC.T);
        CN =  IR;
        SRC(reg.R4,reg.R5);
        break;
    case 0x26:
        //FIM R6R7
        FETCH_IN(PC.T);
        CN =  IR;
        FIM(reg.R6,reg.R7,CN);
        break;
    case 0x27:
        //SRC R6R7
        FETCH_IN(PC.T);
        CN =  IR;
        SRC(reg.R6,reg.R7);
        break;
    case 0x28:
        //FIM R8R9
        FETCH_IN(PC.T);
        CN =  IR;
        FIM(reg.R8,reg.R9,CN);
        break;
    case 0x29:
        //SRC R8R9
        FETCH_IN(PC.T);
        CN =  IR;
        SRC(reg.R8,reg.R9);
        break;
    case 0x2A:
        //FIM R10R11
        FETCH_IN(PC.T);
        CN =  IR;
        FIM(reg.R10,reg.R11,CN);
        break;
    case 0x2B:
        //SRC R10R11
        FETCH_IN(PC.T);
        CN =  IR;
        SRC(reg.R10,reg.R11);
        break;
    case 0x2C:
        //FIM R12R13
        FETCH_IN(PC.T);
        CN =  IR;
        FIM(reg.R12,reg.R13,CN);
        break;
    case 0x2D:
        //SRC R12R13
        FETCH_IN(PC.T);
        CN =  IR;
        SRC(reg.R12,reg.R13);
        break;
    case 0x2E:
        //FIM R14R15
        FETCH_IN(PC.T);
        CN =  IR;
        FIM(reg.R14,reg.R15,CN);
        break;
    case 0x2F:
        //SRC R14R15
        FETCH_IN(PC.T);
        CN =  IR;
        SRC(reg.R14,reg.R15);
        break;
    case 0x30:
        // Fetch Indirect ROM - INdirect Addressing.
        // FIN R0R1 -- invalid generally
        FIN(reg.R0,reg.R1);
        break;
    case 0x31:
        // JIN R0R1
        JIN(reg.R0,reg.R1);
        break;
    case 0x32:
        // FIN R2R3
        FIN(reg.R2,reg.R3);
        break;
    case 0x33:
        // JIN R2R3
        JIN(reg.R2,reg.R3);
        break;
    case 0x34:
        // FIN R4R5
        FIN(reg.R4,reg.R5);
        break;
    case 0x35:
        // JIN R4R5
        JIN(reg.R4,reg.R5);
        break;
    case 0x36:
        // FIN R6R7
        FIN(reg.R6,reg.R7);
        break;
    case 0x37:
        // JIN R6R7
        JIN(reg.R6,reg.R7);
        break;
    case 0x38:
        // FIN R8R9
        FIN(reg.R8,reg.R9);
        break;
    case 0x39:
        // JIN R8R9
        JIN(reg.R8,reg.R9);
        break;
    case 0x3A:
        // FIN R10R11
        FIN(reg.R10,reg.R11);
        break;
    case 0x3B:
        // JIN R10R11
        JIN(reg.R10,reg.R11);
        break;
    case 0x3C:
        // FIN R12R13
        FIN(reg.R12,reg.R13);
        break;
    case 0x3D:
        // JIN R12R13
        JIN(reg.R12,reg.R13);
        break;
    case 0x3E:
        // FIN R14R15
        FIN(reg.R14,reg.R15);
        break;
    case 0x3F:
        // JIN R14R15
        JIN(reg.R14,reg.R15);
        break;
    case 0x40:
        // JUN A3A2A1
        FETCH_IN(PC.T);
        CN =  IR;
        FETCH_IN(PC.T);
        JUN(0x0,CN,IR);
        break;
    case 0x41:
        // JUN A3A2A1
        FETCH_IN(PC.T);
        CN =  IR;
        FETCH_IN(PC.T);
        JUN(0x1,CN,IR);
        break;
    case 0x42:
        // JUN A3A2A1
        FETCH_IN(PC.T);
        CN =  IR;
        FETCH_IN(PC.T);
        JUN(0x2,CN,IR);
        break;
    case 0x43:
        // JUN A3A2A1
        FETCH_IN(PC.T);
        CN =  IR;
        FETCH_IN(PC.T);
        JUN(0x3,CN,IR);
        break;
    case 0x44:
        // JUN A3A2A1
        FETCH_IN(PC.T);
        CN =  IR;
        FETCH_IN(PC.T);
        JUN(0x4,CN,IR);
        break;
    case 0x45:
        // JUN A3A2A1
        FETCH_IN(PC.T);
        CN =  IR;
        FETCH_IN(PC.T);
        JUN(0x5,CN,IR);
        break;
    case 0x46:
        // JUN A3A2A1
        FETCH_IN(PC.T);
        CN =  IR;
        FETCH_IN(PC.T);
        JUN(0x6,CN,IR);
        break;
    case 0x47:
        // JUN A3A2A1
        FETCH_IN(PC.T);
        CN =  IR;
        FETCH_IN(PC.T);
        JUN(0x7,CN,IR);
        break;
    case 0x48:
        // JUN A3A2A1
        FETCH_IN(PC.T);
        CN =  IR;
        FETCH_IN(PC.T);
        JUN(0x8,CN,IR);
        break;
    case 0x49:
        // JUN A3A2A1
        FETCH_IN(PC.T);
        CN =  IR;
        FETCH_IN(PC.T);
        JUN(0x9,CN,IR);
        break;
    case 0x4A:
        // JUN A3A2A1
        FETCH_IN(PC.T);
        CN =  IR;
        FETCH_IN(PC.T);
        JUN(0xA,CN,IR);
        break;
    case 0x4B:
        // JUN A3A2A1
        FETCH_IN(PC.T);
        CN =  IR;
        FETCH_IN(PC.T);
        JUN(0xB,CN,IR);
        break;
    case 0x4C:
        // JUN A3A2A1
        FETCH_IN(PC.T);
        CN =  IR;
        FETCH_IN(PC.T);
        JUN(0xC,CN,IR);
        break;
    case 0x4D:
        // JUN A3A2A1
        FETCH_IN(PC.T);
        CN =  IR;
        FETCH_IN(PC.T);
        JUN(0xD,CN,IR);
        break;
    case 0x4E:
        // JUN A3A2A1
        FETCH_IN(PC.T);
        CN =  IR;
        FETCH_IN(PC.T);
        JUN(0xE,CN,IR);
        break;
    case 0x4F:
        // JUN A3A2A1
        FETCH_IN(PC.T);
        CN =  IR;
        FETCH_IN(PC.T);
        JUN(0xF,CN,IR);
        break;
    }
}

int JMP(int CN,uint8_t ADDR)
{
    switch (CN)
    {
    case 0:
        PC.T = ADDR;
        break;
    case 1:
        if(main_mem.FLAG[ZERO_F] == 0 & 
           main_mem.FLAG[CARRY_F] == 0 &
           main_mem.FLAG[NOT_TEST_F] == 1)
        {
            PC.T = ADDR;
        }
        else
        {
            PC.T = PC.T;
        }
    case 2:
        if(main_mem.FLAG[ZERO_F] == 0 & 
           main_mem.FLAG[CARRY_F] == 1 &
           main_mem.FLAG[NOT_TEST_F] == 0)
        {
            PC.T = ADDR;    
        }
        else
        {
            PC.T = PC.T;
        }
        break;
    case 3:
        if(main_mem.FLAG[ZERO_F] == 0 & 
           main_mem.FLAG[CARRY_F] == 1 &
           main_mem.FLAG[NOT_TEST_F] == 1)
        {
            PC.T = ADDR;
        }
        else
        {
            PC.T = PC.T;            
        }
        break;
    case 4:
        if(main_mem.FLAG[ZERO_F] == 1 & 
           main_mem.FLAG[CARRY_F] == 0 &
           main_mem.FLAG[NOT_TEST_F] == 0)
        {
            PC.T = ADDR;
        }
        else
        {
            PC.T = PC.T;            
        }
        break;
    case 5:
        if(main_mem.FLAG[ZERO_F] == 1 & 
           main_mem.FLAG[CARRY_F] == 0 &
           main_mem.FLAG[NOT_TEST_F] == 1)
        {
            PC.T = ADDR;
        }
        else
        {
            PC.T = PC.T;            
        }
        break;
    case 6:
        if(main_mem.FLAG[ZERO_F] == 1 & 
           main_mem.FLAG[CARRY_F] == 1 &
           main_mem.FLAG[NOT_TEST_F] == 0)
        {
            PC.T = ADDR;
        }
        else
        {
            PC.T = PC.T;            
        }
        break;
    case 7:
        if(main_mem.FLAG[ZERO_F] == 1 & 
           main_mem.FLAG[CARRY_F] == 1 &
           main_mem.FLAG[NOT_TEST_F] == 1)
        {
            PC.T = ADDR;
        }
        else
        {
            PC.T = PC.T;            
        }
        break;
    case 8:
        if(!(main_mem.FLAG[ZERO_F] == 0 & 
           main_mem.FLAG[CARRY_F] == 0 &
           main_mem.FLAG[NOT_TEST_F] == 0))
        {
            PC.T = ADDR;
        }
        else
        {
            PC.T = PC.T;            
        }
        break;
    case 9:
        if(!(main_mem.FLAG[ZERO_F] == 0 & 
           main_mem.FLAG[CARRY_F] == 0 &
           main_mem.FLAG[NOT_TEST_F] == 1))
        {
            PC.T = ADDR;
        }
        else
        {
            PC.T = PC.T;            
        }
        break;
    case 10:
        if(!(main_mem.FLAG[ZERO_F] == 0 & 
           main_mem.FLAG[CARRY_F] == 1 &
           main_mem.FLAG[NOT_TEST_F] == 0))
        {
            PC.T = ADDR;
        }
        else
        {
            PC.T = PC.T;            
        }
        break;
    case 11:
        if(!(main_mem.FLAG[ZERO_F] == 0 & 
           main_mem.FLAG[CARRY_F] == 1 &
           main_mem.FLAG[NOT_TEST_F] == 1))
        {
            PC.T = ADDR;
        }
        else
        {
            PC.T = PC.T;            
        }
        break;
    case 12:
        if(!(main_mem.FLAG[ZERO_F] == 1 & 
           main_mem.FLAG[CARRY_F] == 0 &
           main_mem.FLAG[NOT_TEST_F] == 0))
        {
            PC.T = ADDR;
        }
        else
        {
            PC.T = PC.T;            
        }
        break;
    case 13:
        if(!(main_mem.FLAG[ZERO_F] == 1 & 
           main_mem.FLAG[CARRY_F] == 0 &
           main_mem.FLAG[NOT_TEST_F] == 1))
        {
            PC.T = ADDR;
        }
        else
        {
            PC.T = PC.T;            
        }
        break;
    case 14:
        if(!(main_mem.FLAG[ZERO_F] == 1 & 
           main_mem.FLAG[CARRY_F] == 1 &
           main_mem.FLAG[NOT_TEST_F] == 0))
        {
            PC.T = ADDR;
        }
        else
        {
            PC.T = PC.T;            
        }
        break;
    case 15:
        if(!(main_mem.FLAG[ZERO_F] == 1 & 
           main_mem.FLAG[CARRY_F] == 1 &
           main_mem.FLAG[NOT_TEST_F] == 1))
        {
            PC.T = ADDR;
        }
        else
        {
            PC.T = PC.T;            
        }
        break;
    default:
        break;
    }
}

int FIM(int R_0,int R_1,int DATA)
{
    int temp = DATA;
    R_0 = (DATA >> 4)&0xF;
    R_1 = (temp & 0xF);
    return 0;
}

int SRC(int R_0,int R_1)
{
    int temp = (R_0 << 4)+(R_1&0xF);
    SRC_REG = temp;
}

int FIN(int R_0,int R_1)
{
    int temp = (reg.R0 << 4) + (reg.R1 & 0xF);
    int temp2 = ROM_READ(temp);
    FIM(R_0,R_1,temp2);
    return 0;
}

int JIN(int R_0,int R_1)
{
    PC.bits.PM = R_0;
    PC.bits.PL = R_1;
    return 0;
}

int JUN(int ADDR_3,int ADDR_2,int ADDR_1)
{
    PC.bits.PH = ADDR_3;
    PC.bits.PM = ADDR_2;
    PC.bits.PL = ADDR_1;
    return 0;
}