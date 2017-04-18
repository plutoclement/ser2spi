# ser2spi
Codes to make an Arduino to produce SPI commands. The SPI commands are sent via the serial port to the SPI

# Protocol
`1000000 WR CS<7:0> ADD<7:0> DATA<7:0>`    
the first '1' is used to fix the size of the binary word (needed by atoi() fonction in C)
then seven not used 0
then 8 bits of Chip Select
then 8 bits of adress
then 8 bits of data

# On the arduino
  - download the file ser2spi_v2.ino

# On the computer
- Use python (the code work with 2.7 and 3.6)
- need pySerial librairy installed
- example code : test_arduino.py
