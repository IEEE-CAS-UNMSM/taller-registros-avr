#define NUMERO *(unsigned char*) 0x077F 
    #define RESULTADO_SHIFT_IZQ *(unsigned char*) 0x0782
    #define RESULTADO_SHIFT_DER *(unsigned char*) 0x0784
    
    void setup() {
      Serial.begin(9600);
    
      NUMERO = 0x12;  // 0001 0010
    
      RESULTADO_SHIFT_IZQ = NUMERO << 2; // Desplazamiento a la izquierda 2 bits
      RESULTADO_SHIFT_DER = NUMERO >> 2; // Desplazamiento a la derecha 2 bits
    
      Serial.print("Valor del número: "), Serial.print(NUMERO, BIN), Serial.print(" (DEC: "), Serial.print(NUMERO), Serial.println(")");
      Serial.print("Desplazamiento izquierda 2 bits: "), Serial.print(RESULTADO_SHIFT_IZQ, BIN), Serial.print(" (DEC: "), Serial.print(RESULTADO_SHIFT_IZQ), Serial.println(")");
      Serial.print("Desplazamiento derecha   2 bits: "), Serial.print(RESULTADO_SHIFT_DER, BIN), Serial.print(" (DEC: "), Serial.print(RESULTADO_SHIFT_DER), Serial.println(")");
    }
    
    void loop(){}