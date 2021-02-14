# 6502monitoranalyze
Program to monitor and analyze my MOS 6502AD Procesoor with Arduino Mega

  You need to use an Arduino Mega because of the lack of digital pin count on other Arduinos.
  Data Bus pins are coonected to digital pins: 31,33,35,37,39,41,43,45
  Address Lines are connected to digital pins: 22,24,26,28,30,32,34,36,38,40,42,44,46,48,50,52
  The Read/Write(R/W) pin is connected to digital pin 9
  The system clock is connected to digital pin 8

First binary is the data from 16 address pins on the 6502
The second is data from data bus pins on 6502
The third is again address lines but in 4 digit hexadecimal
The fourth tells if the processor is reading or writing on data bus
The fifth is again data bus but in 2 digit hexadecimal.
