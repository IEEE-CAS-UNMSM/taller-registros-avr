void setup() {
      Serial.begin(9600);

      float flotante = 7.08;
      double doble = 12.34567;
      unsigned int entero = 3;
      unsigned char letra = 'a';
      unsigned int arreglo_entero[3] = {0};
      unsigned long long arreglo_ll[3] = {0};
        
      // Imprimir la información en el puerto serie
      Serial.print("Dirección del float:\t"), Serial.print((uintptr_t)&flotante, HEX), Serial.print("\t Tamaño: "), Serial.println(sizeof(float));
      Serial.print("Dirección del double:\t"), Serial.print((uintptr_t)&doble, HEX), Serial.print("\t Tamaño: "), Serial.println(sizeof(double));
      Serial.print("Dirección del int:\t"), Serial.print((uintptr_t)&entero, HEX), Serial.print("\t Tamaño: "), Serial.println(sizeof(int));
      Serial.print("Dirección del char:\t"), Serial.print((uintptr_t)&letra, HEX), Serial.print("\t Tamaño: "), Serial.println(sizeof(char));
      Serial.print("Dirección arreglo_int:\t"), Serial.print((uintptr_t)&arreglo_entero, HEX), Serial.print("\t Tamaño: "), Serial.println(sizeof(arreglo_entero));
      Serial.print("Dirección arreglo_ll:\t"), Serial.print((uintptr_t)&arreglo_ll, HEX), Serial.print("\t Tamaño: "), Serial.println(sizeof(arreglo_ll));
    }
        
    void loop() {
    }  