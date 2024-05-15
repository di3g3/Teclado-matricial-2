#include "BCD7SEG.h"
#include "MKL25Z4.h"
#include "PININIT.h"
int seg7[7][15] = {
                 {1,1,1,1,1,1,0}, // 0
                 {0,1,1,0,0,0,0}, // 1
                 {1,1,0,1,1,0,1}, // 2
                 {1,1,1,1,0,0,1}, // 3
                 {0,1,1,0,0,1,1}, // 4
                 {1,0,1,1,0,1,1}, // 5
                 {1,0,1,1,1,1,1}, // 6
                 {1,1,1,0,0,0,0}, // 7 
                 {1,1,1,1,1,1,1}, // 8
                 {1,1,1,0,0,1,1}, // 9
                 {1,1,1,0,1,1,1}, // A
                 {0,0,1,1,1,1,1}, // b
                 {1,0,0,1,1,1,0}, // C
                 {0,1,1,1,1,0,1}, // D
                 {1,0,0,1,1,1,1}, // E
};
int BCD(puerto){
    char tecla = KEYBOARD('A');
    switch ('tecla'){
    case '0': 
         for(int i = 0; i < 8;i++){
            PTA -> PSOR|=(seg7[i][0] << i);
         }
            break;
    case '1': 
         for(int i = 0; i < 8;i++){
            PTA -> PSOR|=(seg7[i][1] << i);
         }
            break;
    case '2': 
         for(int i = 0; i < 8;i++){
            PTA -> PSOR|=(seg7[i][2] << i);
         }
            break;
    case '3': 
         for(int i = 0; i < 8;i++){
            PTA -> PSOR|=(seg7[i][3] << i);
         }
            break;
    case '4': 
         for(int i = 0; i < 8;i++){
            PTA -> PSOR|=(seg7[i][4] << i);
         }
            break;
    case '5': 
         for(int i = 0; i < 8;i++){
            PTA -> PSOR|=(seg7[i][5] << i);
         }
            break;
    case '6': 
         for(int i = 0; i < 8;i++){
            PTA -> PSOR|=(seg7[i][6] << i);
         }
            break;
    case '7': 
         for(int i = 0; i < 8;i++){
            PTA -> PSOR|=(seg7[i][7] << i);
         }
            break;
    case '8': 
         for(int i = 0; i < 8;i++){
            PTA -> PSOR|=(seg7[i][8] << i);
         }
            break;
    case '9': 
         for(int i = 0; i < 8;i++){
            PTA -> PSOR|=(seg7[i][9] << i);
         }
            break;
    case 'A': 
         for(int i = 0; i < 8;i++){
            PTA -> PSOR|=(seg7[i][10] << i);
         }
            break;
    case 'B': 
         for(int i = 0; i < 8;i++){
            PTA -> PSOR|=(seg7[i][11] << i);
         }
            break;
    case 'C': 
         for(int i = 0; i < 8;i++){
            PTA -> PSOR|=(seg7[i][12] << i);
         }
            break;
    case 'D': 
         for(int i = 0; i < 8;i++){
            PTA -> PSOR|=(seg7[i][13] << i);
         }
            break;
    case '#': 
         for(int i = 0; i < 8;i++){
            PTA -> PSOR|=(seg7[i][14] << i);
         }
            break;
    case '*': 
         for(int i = 0; i < 8;i++){
            PTA -> PSOR|=(seg7[i][15] << i);
         }
            break;
    
    }
}
int DECO(num){
    switch ('num'){
    case '0': 
         for(int i = 0; i < 8;i++){
            PTA -> PSOR|=(seg7[i][0] << i);
         }
            break;
    case '1': 
         for(int i = 0; i < 8;i++){
            PTA -> PSOR|=(seg7[i][1] << i);
         }
            break;
    case '2': 
         for(int i = 0; i < 8;i++){
            PTA -> PSOR|=(seg7[i][2] << i);
         }
            break;
    case '3': 
         for(int i = 0; i < 8;i++){
            PTA -> PSOR|=(seg7[i][3] << i);
         }
            break;
    case '4': 
         for(int i = 0; i < 8;i++){
            PTA -> PSOR|=(seg7[i][4] << i);
         }
            break;
    case '5': 
         for(int i = 0; i < 8;i++){
            PTA -> PSOR|=(seg7[i][5] << i);
         }
            break;
    case '6': 
         for(int i = 0; i < 8;i++){
            PTA -> PSOR|=(seg7[i][6] << i);
         }
            break;
    case '7': 
         for(int i = 0; i < 8;i++){
            PTA -> PSOR|=(seg7[i][7] << i);
         }
            break;
    case '8': 
         for(int i = 0; i < 8;i++){
            PTA -> PSOR|=(seg7[i][8] << i);
         }
            break;
    case '9': 
         for(int i = 0; i < 8;i++){
            PTA -> PSOR|=(seg7[i][9] << i);
         }
            break;
    }

}