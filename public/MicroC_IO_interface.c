/*void main() {

     ANSELB = 0b00000000;
     TRISB = 0b00000000;

      while (1) {

           LATB = 0b00000000;
           Delay_ms (1000);
           LATB = 0b11111111;
           Delay_ms (1000);
           }

}*/

void main() {
    ANSELB = 0b00000000;
    ANSELC = 0b00000000;
    TRISB = 0b00000000;
    TRISC = 0b11111111;
    LATB  = 0b00000000;

    while (1) {
    if (PORTC.RC0 == 1){
       LATB = 0b10101010;
       }
    if (PORTC.RC1 == 1){
       LATB = 0b01010101;
       }
    }

}