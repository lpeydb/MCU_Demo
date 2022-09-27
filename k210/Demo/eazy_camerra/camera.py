import sensor, lcd

sensor.reset()
sensor.set_pixformat(sensor.RGB565)
sensor.set_framesize(sensor.QVGA)
sensor.skip_frames()

img = sensor.snapshot()
print(img)
img.save("/sd/test.jpg", quality=95)
