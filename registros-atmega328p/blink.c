#define PORTB *(unsigned char*) 0x024
#define DDRB  *(unsigned char*) 0x025

void setup(){
    PORTB = (1<<5);
}
    
void loop(){
    DDRB |= 0x20;  
    delay(500);
    DDRB &= ~0x20;
    delay(500);
}