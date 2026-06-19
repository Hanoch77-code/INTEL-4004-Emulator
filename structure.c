//#include "register.c"

int SET_WIDTH(int WIDTH,int VAR)
{
    int output = (VAR & ((int)(pow(2,(WIDTH + 1)))) - 1);
    return output;
}

int CPU()
{
    int DATA_WIDTH = 4;
    int ADDR_WIDTH = 12;

    int ACC =  SET_WIDTH(4,ACC);
    int Temp_Reg;
}



int ALU(int _FLAGS,int _DEC_ADJ,int _ACC,int _Temp_Reg,int Timing)
{

}


int IO_PINS_CHECK(EX_PINS PINS){
    
}

int ROM_READ(int LINE)
{
    // TOOD: The ROM is a File which it reads
    //Set the ROM read Flag CM_ROM.
    pins.CM_ROM = 1;
    // Create a file open close oeperation
    
}