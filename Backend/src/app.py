from fastapi import FastAPI, WebSocket
from fastapi.middleware.cors import CORSMiddleware

import serial, time

ser = serial.Serial('/dev/cu.usbserial-1410', 9600, timeout=3000)

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


@app.websocket('/ws')
async def websocket(websocket:WebSocket):
    print("Acepting conection")
    await websocket.accept()
    print("Acepted")
    while True:
        try:
            data = ser.readline()
            distance = str(data.decode("utf-8"))
            await websocket.send_text(distance)
        except:
            pass
            break

