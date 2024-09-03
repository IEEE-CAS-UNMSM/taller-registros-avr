#define NUMERO1 *(unsigned short*) 0x077F 
    #define NUMERO2 *(unsigned short*) 0x0782
    #define RESULTADO_AND *(unsigned short*) 0x0784
    #define RESULTADO_OR *(unsigned short*) 0x0786
    #define RESULTADO_XOR *(unsigned short*) 0x0788
    #define RESULTADO_INV *(unsigned short*) 0x078A
    
    void setup() {
      Serial.begin(9600);
      
      NUMERO1 = 0x3A6F;   // 0011 1010 0110 1111
      NUMERO2 = 0xAB3C;   // 1010 1011 0011 1100
    
      RESULTADO_AND = NUMERO1 & NUMERO2;
      RESULTADO_OR = NUMERO1 | NUMERO2;  // Corregido
      RESULTADO_XOR = NUMERO1 ^ NUMERO2; // Corregido
      RESULTADO_INV = ~NUMERO1;
    
      Serial.print("Numero1:       "), Serial.println(NUMERO1, BIN);
      Serial.print("Numero2:       "), Serial.println(NUMERO2, BIN);
      Serial.print("Operación AND: "), Serial.println(RESULTADO_AND, BIN);
      Serial.print("Operación OR:  "), Serial.println(RESULTADO_OR, BIN); // Corregido
      Serial.print("Operación XOR: "), Serial.println(RESULTADO_XOR, BIN); // Corregido
      Serial.print("Operación INV: "), Serial.println(RESULTADO_INV, BIN); // Corregido
    }
    void loop(){}