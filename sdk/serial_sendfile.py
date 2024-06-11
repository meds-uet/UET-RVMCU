import sys
import serial
import time

port = "/dev/ttyUSB1"

num = 115200
# name = sys.argv[2]
count = 0

with serial.Serial(port=port, baudrate=num, bytesize=serial.EIGHTBITS, parity=serial.PARITY_NONE, stopbits=serial.STOPBITS_ONE, timeout=1) as ser:
    print("serial baud rate : "+str(num))
    # d = int.to_bytes(b'a', length=1, byteorder='little')
    while True:
        x = b'a'
        ser.write(x)
        # print(x, end="")
        recv = ser.read(1)
        # print(recv)
        count += 1
        if recv != x:
            print(count)
            count = 0
        #time.sleep(0.0002)
        #time.sleep(0.00017)
    print("finished!");
