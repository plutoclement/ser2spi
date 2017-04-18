import arduino_fonctions as af
import serial
# to be used with the code serp2spi_v2 on the Arduino

WR=0
CS='01011001'
ADD=17
DATA='01001100'

WORD=af.ser2spi(WR,CS,ADD,DATA)
 
    ### OPENING CONNECTION TO ARDUINO ###
connected = False
ser = serial.Serial("COM4", 115200)

while not connected:
    try:
       serin = ser.read()
    except ValueError:
        continue
    connected = True

### COM TO ARDUINO ###

ser.write(WORD.encode('utf-8'))   

### CLOSING CONNECTION TO ARDUINO ###
ser.close()
