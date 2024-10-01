import time
import serial
arduinoData=serial.Serial('/dev/ttyACM0',9600)
time.sleep(1)
while True:
    dataPacket=arduinoData.readline()
    dataPacket=dataPacket.decode('utf-8').strip()
    dataPacket=dataPacket.strip('/r/n') #it makes the output seperate strings
    splitPacket=dataPacket.split(",")
    x=splitPacket[0]
    y=splitPacket[1]
    z=splitPacket[2]
    print("X= "+x+" Y= "+y+" Z= "+z)
    
    
