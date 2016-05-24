import serial
import time

with serial.Serial('/dev/ttyACM0', 9600, timeout=1) as ser:
	while True:
		ser.write('0')
		time.sleep(1)
		ser.write('1')
		time.sleep(1)
