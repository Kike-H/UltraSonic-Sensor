from fastapi import FastAPI
from fastapi_socketio import SocketManager

import serial, time, uvicorn

ser = serial.Serial('/dev/cu.usbserial-1410', 9600, timeout=1)


app = FastAPI()
socket = SocketManager(app)

@app.get('/')
def root():
    return {"Hello": "world"}

@app.get('/distance')
def distance():
    distance = ser.readline()
    return {"distance":str(distance.decode("utf-8"))}


