#include "MKL25Z4.h"
int SALIDA[4] = {1,2,3,4};
int SALIDA1[4] = {5,6,7,8};
int BCD[10][4] = {
                   {0,0,0,0},  //0
                   {0,0,0,1},  //1
                   {0,0,1,0},  //2
                   {0,0,1,1},  //3
                   {0,1,0,0},  //4
                   {0,1,0,1},  //5
                   {0,1,1,0},  //6
                   {0,1,1,1},  //7
                   {1,0,0,0},  //8
                   {1,0,0,1},  //9
                  };
int main(){
    SIM -> SCGC5|=SIM_SCGC5_PORTA_MASK;
    PORTA -> PCR[0] |= PORT_PCR_MUX(0);
    for(int i = 0; i <= 9; i++){
    PORTA -> PCR[SALIDA[i]] |= PORT_PCR_MUX(1);
    }
    int estado = PTA -> PDIR & (1 << 0);
    if( estado == 0){
        for(int i = 0;i <= 9;i++){
            for(int j = 0;j < 4;j++){
            PTA -> PSOR |= (BCD[i][j] << SALIDA[j]);
            } 
        if(i == 9){
            int cont2;
            cont2++;
            for(int j = 0;j < 4;j++){
                    PTA -> PSOR |= (BCD[cont2][j] << SALIDA1[j]);
                }
                i = 0;
            }
        }
    } else {
        for(int i = 9;i <= 0;i--){
            for(int j = 0;j < 4;j++){
            PTA -> PSOR |= (BCD[i][j] << SALIDA[j]);
            } 
        if(i == 0){
            int cont2 = 9;
            cont2--;
            for(int j = 0;j < 4;j++){
                    PTA -> PSOR |= (BCD[cont2][j] << SALIDA1[j]);
                }
                i = 9;
            }
        }
    }
    
}

