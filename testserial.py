import serial
import time

ard = serial.Serial("COM9",9600, timeout=0.050)
def ldr1():   
    
    while True:
        msg = ard.readline()
        msg1 = (str(msg))
        if 'R' in msg1:
            print("R")
        elif "L" in msg1:
            print("L")
print(ldr1()) 


    
    
