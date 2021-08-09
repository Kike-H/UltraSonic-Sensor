from fastapi import FastAPI
from fastapi.middleware.cors import CORSMiddleware

import serial, time

ser = serial.Serial('/dev/cu.usbserial-1410', 9600, timeout=4)

origins = ["http://localhost:3000"]

app = FastAPI()

app.add_middleware(
        CORSMiddleware,
        allow_origins=origins,
        allow_credentials=True,
        allow_methods=["*"],
        allow_headers=["*"]
)

@app.get('/')
def root():
    return {"Hello": "world"}

@app.get('/distance')
def distance():
    distance = "0"
    try:
        data = ser.readline()
        distance = str(data.decode("utf-8"))
    except serial.serialutil.SerialException:
        time.sleep(2)
        return {"distance":distance}
    return {"distance":distance}


