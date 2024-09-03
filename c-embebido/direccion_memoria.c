void setup() {
      Serial.begin(9600);
      unsigned int *entero = 0x0800; 
      unsigned char *letra = 0x0704;
    
      *entero = 0xFF31; // BIN: 1111 1111 0011 0001 
      *letra = 0xB;   //   BIN: 1011
    
      Serial.print("Dirección de entero:\t"), Serial.print((uintptr_t)entero, HEX), Serial.print("\t Valor: "), Serial.println(*entero);
      Serial.print("Dirección de letra:\t"), Serial.print((uintptr_t)letra, HEX), Serial.print("\t Valor: "), Serial.println(*letra);
    }
    
    void loop() {}