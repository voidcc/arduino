#!/usr/bin/env python
# -*- coding: utf-8 -*-

import serial
ser = serial.Serial('/dev/ttyACM0', 9600, timeout=1)
#ser.open()



#ser.write("testing")
"""
try:
	while 1:
		try:
			response = ser.readline()
			print response
		except:
			continue
except KeyboardInterrupt:
	ser.close()
"""
while True:
	print ser.readline()
