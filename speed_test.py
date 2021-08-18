import serial
import datetime

cdc = serial.Serial(
    port="/dev/tty.usbmodem3087336930381",
    baudrate=12000000,
    bytesize=serial.EIGHTBITS,
    parity=serial.PARITY_NONE,
    stopbits=serial.STOPBITS_ONE,
    timeout=0.2,
    xonxoff=False,
    rtscts=True,
    dsrdtr=True,
)

time1 = datetime.datetime.now()
for i in range(100000):
    cdc.write(64)
    # cdc.read(64)

time2 = datetime.datetime.now()

delta = time2 - time1

speed = 64 * 100000 * 8 / delta.total_seconds() / 1000000.0

print("USB Full Speed CDC Read Speed: %f Mbits/s" % speed)
