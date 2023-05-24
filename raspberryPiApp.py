import serial

uart_channel = serial.Serial("/dev/ttyAMA0", baudrate=9600, timeout=2)

while True:
    data = uart_channel.read(1)
    
    if data:
        data1 = data.decode('utf-8')
        print(data1)

    uart_channel.flushInput()
