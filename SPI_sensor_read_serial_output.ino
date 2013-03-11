#include "SPI.h"
//Program that reads several sensor values and prints them to serial in easily (excel) readable format
//In this example 31 sensors are read every second and results are written in serialport with ";" as a separator. 
//Each measured second is it's own line in output
//Modest data manipulation is needed due to the nature of SPI, read more on SPI specification.
void setup() {
  Serial.begin(9600);
  
  DDRH = B00000001; //H0 OUTPUT
  DDRL = B11111111; //L0-L7 OUTPUT
  DDRG = B00000111; //G0-G2 OUTPUT
  DDRD = B10001100; //D7, D2, D3 OUTPUT
  DDRC = B11111111; //C0-C7 OUTPUT
  DDRA = B11111111; //A0-A7 OUTPUT REMEMBER INVERSE ORDER
  
  //Set all (SPI slave) outputs HIGH in the beginning
  PORTH = B00000001; //H0 OUTPUT
  PORTL = B11111111; //L0-L7 OUTPUT
  PORTG = B00000111; //G0-G2 OUTPUT
  PORTD = B10001100; //D7, D2, D3 OUTPUT
  PORTC = B11111111; //C0-C7 OUTPUT
  PORTA = B11111111; //A0-A7 OUTPUT REMEMBER INVERSE ORDER
  
  SPI.begin();
  SPI.setBitOrder(MSBFIRST);
  SPI.setDataMode(SPI_MODE2);
  SPI.setClockDivider(SPI_CLOCK_DIV8);
}

void loop(){
 int value1, value2, value3 = 0;
 word result,result1 = 0;

 // Pin L0
 PORTL &= ~_BV(PL0); //Pin low (and is measured)
 value1 = SPI.transfer(0x00);
 value2 = SPI.transfer(0x00);
 value3 = SPI.transfer(0x00);
 PORTL |= _BV(PL0); //Pin high (back in sleep)
 result1 = word(value1,value2);
 result1 <<= 4;
 value3 >>= 4;
 result = (result1 | value3);
 Serial.print(result);
 Serial.print(";");
 
  // Pin L1
 PORTL &= ~_BV(PL1); //Pin low (and is measured)
 value1 = SPI.transfer(0x00);
 value2 = SPI.transfer(0x00);
 value3 = SPI.transfer(0x00);
 PORTL |= _BV(PL1); //Pin high (back in sleep)
 result1 = word(value1,value2);
 result1 <<= 4;
 value3 >>= 4;
 result = (result1 | value3);
 Serial.print(result);
 Serial.print(";");
 
 // Pin L2
 PORTL &= ~_BV(PL2); //Pin low (and is measured)
 value1 = SPI.transfer(0x00);
 value2 = SPI.transfer(0x00);
 value3 = SPI.transfer(0x00);
 PORTL |= _BV(PL2); //Pin high (back in sleep)
 result1 = word(value1,value2);
 result1 <<= 4;
 value3 >>= 4;
 result = (result1 | value3);
 Serial.print(result);
 Serial.print(";");
 
  // Pin L3
 PORTL &= ~_BV(PL3); //Pin low (and is measured)
 value1 = SPI.transfer(0x00);
 value2 = SPI.transfer(0x00);
 value3 = SPI.transfer(0x00);
 PORTL |= _BV(PL3); //Pin high (back in sleep)
 result1 = word(value1,value2);
 result1 <<= 4;
 value3 >>= 4;
 result = (result1 | value3);
 Serial.print(result);
 Serial.print(";");
 
  // Pin L4
 PORTL &= ~_BV(PL4); //Pin low (and is measured)
 value1 = SPI.transfer(0x00);
 value2 = SPI.transfer(0x00);
 value3 = SPI.transfer(0x00);
 PORTL |= _BV(PL4); //Pin high (back in sleep)
 result1 = word(value1,value2);
 result1 <<= 4;
 value3 >>= 4;
 result = (result1 | value3);
 Serial.print(result);
 Serial.print(";");
 
  // Pin L5
 PORTL &= ~_BV(PL5); //Pin low (and is measured)
 value1 = SPI.transfer(0x00);
 value2 = SPI.transfer(0x00);
 value3 = SPI.transfer(0x00);
 PORTL |= _BV(PL5); //Pin high (back in sleep)
 result1 = word(value1,value2);
 result1 <<= 4;
 value3 >>= 4;
 result = (result1 | value3);
 Serial.print(result);
 Serial.print(";");
 
  // Pin L6
 PORTL &= ~_BV(PL6); //Pin low (and is measured)
 value1 = SPI.transfer(0x00);
 value2 = SPI.transfer(0x00);
 value3 = SPI.transfer(0x00);
 PORTL |= _BV(PL6); //Pin high (back in sleep)
 result1 = word(value1,value2);
 result1 <<= 4;
 value3 >>= 4;
 result = (result1 | value3);
 Serial.print(result);
 Serial.print(";");
 
  // Pin L7
 PORTL &= ~_BV(PL7); //Pin low (and is measured)
 value1 = SPI.transfer(0x00);
 value2 = SPI.transfer(0x00);
 value3 = SPI.transfer(0x00);
 PORTL |= _BV(PL7); //Pin high (back in sleep)
 result1 = word(value1,value2);
 result1 <<= 4;
 value3 >>= 4;
 result = (result1 | value3);
 Serial.print(result);
 Serial.print(";");
 
  // Pin G0
 PORTG &= ~_BV(PG0); //Pin low (and is measured)
 value1 = SPI.transfer(0x00);
 value2 = SPI.transfer(0x00);
 value3 = SPI.transfer(0x00);
 PORTG |= _BV(PG0); //Pin high (back in sleep)
 result1 = word(value1,value2);
 result1 <<= 4;
 value3 >>= 4;
 result = (result1 | value3);
 Serial.print(result);
 Serial.print(";");
 
  // Pin G1
 PORTG &= ~_BV(PG1); //Pin low (and is measured)
 value1 = SPI.transfer(0x00);
 value2 = SPI.transfer(0x00);
 value3 = SPI.transfer(0x00);
 PORTG |= _BV(PG1); //Pin high (back in sleep)
 result1 = word(value1,value2);
 result1 <<= 4;
 value3 >>= 4;
 result = (result1 | value3);
 Serial.print(result);
 Serial.print(";");
 
  // Pin G2
 PORTG &= ~_BV(PG2); //Pin low (and is measured)
 value1 = SPI.transfer(0x00);
 value2 = SPI.transfer(0x00);
 value3 = SPI.transfer(0x00);
 PORTG |= _BV(PG2); //Pin high (back in sleep)
 result1 = word(value1,value2);
 result1 <<= 4;
 value3 >>= 4;
 result = (result1 | value3);
 Serial.print(result);
 Serial.print(";");
 
  // Pin D7
 PORTD &= ~_BV(PD7); //Pin low (and is measured)
 value1 = SPI.transfer(0x00);
 value2 = SPI.transfer(0x00);
 value3 = SPI.transfer(0x00);
 PORTD |= _BV(PD7); //Pin high (back in sleep)
 result1 = word(value1,value2);
 result1 <<= 4;
 value3 >>= 4;
 result = (result1 | value3);
 Serial.print(result);
 Serial.print(";");
 
  // Pin C0
 PORTC &= ~_BV(PC0); //Pin low (and is measured)
 value1 = SPI.transfer(0x00);
 value2 = SPI.transfer(0x00);
 value3 = SPI.transfer(0x00);
 PORTC |= _BV(PC0); //Pin high (back in sleep)
 result1 = word(value1,value2);
 result1 <<= 4;
 value3 >>= 4;
 result = (result1 | value3);
 Serial.print(result);
 Serial.print(";");
 
  // Pin C1
 PORTC &= ~_BV(PC1); //Pin low (and is measured)
 value1 = SPI.transfer(0x00);
 value2 = SPI.transfer(0x00);
 value3 = SPI.transfer(0x00);
 PORTC |= _BV(PC1); //Pin high (back in sleep)
 result1 = word(value1,value2);
 result1 <<= 4;
 value3 >>= 4;
 result = (result1 | value3);
 Serial.print(result);
 Serial.print(";");
 
 // Pin C2
 PORTC &= ~_BV(PC2); //Pin low (and is measured)
 value1 = SPI.transfer(0x00);
 value2 = SPI.transfer(0x00);
 value3 = SPI.transfer(0x00);
 PORTC |= _BV(PC2); //Pin high (back in sleep)
 result1 = word(value1,value2);
 result1 <<= 4;
 value3 >>= 4;
 result = (result1 | value3);
 Serial.print(result);
 Serial.print(";");
 
  // Pin C3
 PORTC &= ~_BV(PC3); //Pin low (and is measured)
 value1 = SPI.transfer(0x00);
 value2 = SPI.transfer(0x00);
 value3 = SPI.transfer(0x00);
 PORTC |= _BV(PC3); //Pin high (back in sleep)
 result1 = word(value1,value2);
 result1 <<= 4;
 value3 >>= 4;
 result = (result1 | value3);
 Serial.print(result);
 Serial.print(";");
 
  // Pin C4
 PORTC &= ~_BV(PC4); //Pin low (and is measured)
 value1 = SPI.transfer(0x00);
 value2 = SPI.transfer(0x00);
 value3 = SPI.transfer(0x00);
 PORTC |= _BV(PC4); //Pin high (back in sleep)
 result1 = word(value1,value2);
 result1 <<= 4;
 value3 >>= 4;
 result = (result1 | value3);
 Serial.print(result);
 Serial.print(";");
 
  // Pin C5
 PORTC &= ~_BV(PC5); //Pin low (and is measured)
 value1 = SPI.transfer(0x00);
 value2 = SPI.transfer(0x00);
 value3 = SPI.transfer(0x00);
 PORTC |= _BV(PC5); //Pin high (back in sleep)
 result1 = word(value1,value2);
 result1 <<= 4;
 value3 >>= 4;
 result = (result1 | value3);
 Serial.print(result);
 Serial.print(";");
 
  // Pin C6
 PORTC &= ~_BV(PC6); //Pin low (and is measured)
 value1 = SPI.transfer(0x00);
 value2 = SPI.transfer(0x00);
 value3 = SPI.transfer(0x00);
 PORTC |= _BV(PC6); //Pin high (back in sleep)
 result1 = word(value1,value2);
 result1 <<= 4;
 value3 >>= 4;
 result = (result1 | value3);
 Serial.print(result);
 Serial.print(";");
 
  // Pin C7
 PORTC &= ~_BV(PC7); //Pin low (and is measured)
 value1 = SPI.transfer(0x00);
 value2 = SPI.transfer(0x00);
 value3 = SPI.transfer(0x00);
 PORTC |= _BV(PC7); //Pin high (back in sleep)
 result1 = word(value1,value2);
 result1 <<= 4;
 value3 >>= 4;
 result = (result1 | value3);
 Serial.print(result);
 Serial.print(";");
 
  // Pin A7
 PORTA &= ~_BV(PA7); //Pin low (and is measured)
 value1 = SPI.transfer(0x00);
 value2 = SPI.transfer(0x00);
 value3 = SPI.transfer(0x00);
 PORTA |= _BV(PA7); //Pin high (back in sleep)
 result1 = word(value1,value2);
 result1 <<= 4;
 value3 >>= 4;
 result = (result1 | value3);
 Serial.print(result);
 Serial.print(";");
 
  // Pin A6
 PORTA &= ~_BV(PA6); //Pin low (and is measured)
 value1 = SPI.transfer(0x00);
 value2 = SPI.transfer(0x00);
 value3 = SPI.transfer(0x00);
 PORTA |= _BV(PA6); //Pin high (back in sleep)
 result1 = word(value1,value2);
 result1 <<= 4;
 value3 >>= 4;
 result = (result1 | value3);
 Serial.print(result);
 Serial.print(";");
 
 // Pin A5
 PORTA &= ~_BV(PA5); //Pin low (and is measured)
 value1 = SPI.transfer(0x00);
 value2 = SPI.transfer(0x00);
 value3 = SPI.transfer(0x00);
 PORTA |= _BV(PA5); //Pin high (back in sleep)
 result1 = word(value1,value2);
 result1 <<= 4;
 value3 >>= 4;
 result = (result1 | value3);
 Serial.print(result);
 Serial.print(";");
 
  // Pin A4
 PORTA &= ~_BV(PA4); //Pin low (and is measured)
 value1 = SPI.transfer(0x00);
 value2 = SPI.transfer(0x00);
 value3 = SPI.transfer(0x00);
 PORTA |= _BV(PA4); //Pin high (back in sleep)
 result1 = word(value1,value2);
 result1 <<= 4;
 value3 >>= 4;
 result = (result1 | value3);
 Serial.print(result);
 Serial.print(";");
 
  // Pin A3
 PORTA &= ~_BV(PA3); //Pin low (and is measured)
 value1 = SPI.transfer(0x00);
 value2 = SPI.transfer(0x00);
 value3 = SPI.transfer(0x00);
 PORTA |= _BV(PA3); //Pin high (back in sleep)
 result1 = word(value1,value2);
 result1 <<= 4;
 value3 >>= 4;
 result = (result1 | value3);
 Serial.print(result);
 Serial.print(";");
 
  // Pin A2
 PORTA &= ~_BV(PA2); //Pin low (and is measured)
 value1 = SPI.transfer(0x00);
 value2 = SPI.transfer(0x00);
 value3 = SPI.transfer(0x00);
 PORTA |= _BV(PA2); //Pin high (back in sleep)
 result1 = word(value1,value2);
 result1 <<= 4;
 value3 >>= 4;
 result = (result1 | value3);
 Serial.print(result);
 Serial.print(";");
 
  // Pin A1
 PORTA &= ~_BV(PA1); //Pin low (and is measured)
 value1 = SPI.transfer(0x00);
 value2 = SPI.transfer(0x00);
 value3 = SPI.transfer(0x00);
 PORTA |= _BV(PA1); //Pin high (back in sleep)
 result1 = word(value1,value2);
 result1 <<= 4;
 value3 >>= 4;
 result = (result1 | value3);
 Serial.print(result);
 Serial.print(";");
 
  // Pin A0
 PORTA &= ~_BV(PA0); //Pin low (and is measured)
 value1 = SPI.transfer(0x00);
 value2 = SPI.transfer(0x00);
 value3 = SPI.transfer(0x00);
 PORTA |= _BV(PA0); //Pin high (back in sleep)
 result1 = word(value1,value2);
 result1 <<= 4;
 value3 >>= 4;
 result = (result1 | value3);
 Serial.print(result);
 Serial.print(";");
 
   // Pin D2
 PORTD &= ~_BV(PD2); //Pin low (and is measured)
 value1 = SPI.transfer(0x00);
 value2 = SPI.transfer(0x00);
 value3 = SPI.transfer(0x00);
 PORTD |= _BV(PD2); //Pin high (back in sleep)
 result1 = word(value1,value2);
 result1 <<= 4;
 value3 >>= 4;
 result = (result1 | value3);
 Serial.print(result);
 Serial.print(";");
 
  // Pin D3
 PORTD &= ~_BV(PD3); //Pin low (and is measured)
 value1 = SPI.transfer(0x00);
 value2 = SPI.transfer(0x00);
 value3 = SPI.transfer(0x00);
 PORTD |= _BV(PD3); //Pin high (back in sleep)
 result1 = word(value1,value2);
 result1 <<= 4;
 value3 >>= 4;
 result = (result1 | value3);
 Serial.print(result);
 Serial.print(";");
 
 
 // End of loop
 Serial.print("\n");
 delay(1000);
  
}
