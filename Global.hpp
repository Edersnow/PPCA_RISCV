#ifndef __Global
#define __Global

#include <bits/stdc++.h>
typedef unsigned int uint;

enum typeT{
    ADD, SUB, SLL, SLT, SLTU, XOR, SRL, SRA, OR, AND,                                  //TYPE R
    JALR, LB, LH, LW, LBU, LHU, ADDI, SLTI, SLTIU, XORI, ORI, ANDI, SLLI, SRLI, SRAI,  //TYPE I
    SB, SH, SW,                                                                        //TYPE S
    BEQ, BNE, BLT, BGE, BLTU, BGEU,                                                    //TYPE SB
    LUI, AUIPC,                                                                        //TYPE U
    JAL                                                                                //TYPE UJ
};

unsigned char _memory[10000000];
uint _pc;
uint _register[32];
uint target[32];
bool is_end;



//prediction part
uint app_time[64];
uint total_app;

//Global prediction
uint BHR;                  //16bits
uint PHT_for_BHR[65536];   //2bits

//Local prediction
uint BHT[64];              //8bits
uint PHT[64][256];         //2bits



//Statistics section
uint total_prediction;
uint correct_prediction;

//for debug
/*
const char *TYPES[]={"ADD","SUB","SLL","SLT","SLTU","XOR","SRL","SRA","OR","AND",
"JALR","LB","LH","LW","LBU","LHU","ADDI","SLTI","SLTIU","XORI","ORI","ANDI","SLLI","SRLI",
"SRAI","SB","SH","SW", "BEQ","BNE","BLT","BGE","BLTU","BGEU","LUI","AUIPC","JAL" };
*/

#endif