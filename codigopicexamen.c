#include <18f23k20.h>
#use delay(clock=4000)

#byte trisa=0x85
#byte porta=0x05
#byte trisb=0x86
#byte portb=0x06

#define encender output_high
#define apagar output_low

#define salida_1 PIN_B0
#define salida_2 PIN_B1
#define salida_3 PIN_B2
#define salida_4 PIN_B3
#define salida_5 PIN_B4
#define salida_6 PIN_B5
#define salida_7 PIN_B6

#define entrada_1 PIN_A0
#define entrada_2 PIN_A1
#define entrada_3 PIN_A2
#define entrada_4 PIN_A3
#define entrada_5 PIN_A4
#define entrada_6 PIN_A5
#define entrada_7 PIN_A6


void main() {
trisa = 0b00001111;
trisb = 0;
portb = 0;
porta = 0;

while(true) {
if(input(entrada_1) == 1 && (input(entrada_2)) ==0 && (input(entrada_3)) ==0 && (input(entrada_4)) ==0 && (input(entrada_5)) ==0 && (input(entrada_6)) ==0 && (input(entrada_7)) ==0){
delay_ms(300);
encender (salida_1);
}
else{
apagar(salida_1);
}
if(input(entrada_1) == 0 && (input(entrada_2)) ==1 && (input(entrada_3)) ==0 && (input(entrada_4)) ==0 && (input(entrada_5)) ==0 && (input(entrada_6)) ==0 && (input(entrada_7)) ==0){
delay_ms(300);
encender(salida_2);
}
else{
apagar(salida_2);
}
if(input(entrada_1) == 0 && (input(entrada_2)) ==0 && (input(entrada_3)) ==1 && (input(entrada_4)) ==0 && (input(entrada_5)) ==0 && (input(entrada_6)) ==0 && (input(entrada_7)) ==0){
delay_ms(300);
encender(salida_3);
}
else{
apagar(salida_3);
}
if(input(entrada_1) == 0 && (input(entrada_2)) ==0 && (input(entrada_3)) ==0 && (input(entrada_4)) ==1 && (input(entrada_5)) ==0 && (input(entrada_6)) ==0 && (input(entrada_7)) ==0){
delay_ms(300);
encender(salida_4);
}
else{
apagar(salida_4);
}
if(input(entrada_1) == 0 && (input(entrada_2)) ==0 && (input(entrada_3)) ==0 && (input(entrada_4)) ==0 && (input(entrada_5)) ==1 && (input(entrada_6)) ==0 && (input(entrada_7)) ==0){
delay_ms(300);
encender(salida_5);
}
else{
apagar(salida_5);
}
if(input(entrada_1) == 0 && (input(entrada_2)) ==0 && (input(entrada_3)) ==0 && (input(entrada_4)) ==0 && (input(entrada_5)) ==0 && (input(entrada_6)) ==1 && (input(entrada_7)) ==0){
delay_ms(300);
encender(salida_6);
}
else{
apagar(salida_6);
}
if(input(entrada_1) == 0 && (input(entrada_2)) ==0 && (input(entrada_3)) ==0 && (input(entrada_4)) ==0 && (input(entrada_5)) ==0 && (input(entrada_6)) ==0 && (input(entrada_7)) ==1){
delay_ms(300);
encender(salida_7);
}
else{
apagar(salida_7);
}
}
}
