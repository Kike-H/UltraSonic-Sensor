import serial, time
ser = serial.Serial('/dev/cu.usbserial-1410', 9600, timeout=1)
time.sleep(2)
while True:
    data = ser.readline()
    print(data.decode('utf-8'))

