# Arduino
This the part for arduino


## Dependencies

You need to install [Platformio Cli](https://platformio.org/install/cli) and the next components:

| Name        | Quantity    | Component                  |
| ----------- | ----------- |----------------------------|
| U1          | 1           | Arduino Uno R3             |
| DIST2       | 1           | Ultrasonic distance sensor |
| R1          | 2           | 100 Ω Resistance           |
| D1          | 2           | Led (red and green)        |
| PIEZO1      | 1           | Buzzer                     |

By the way you need to make the follwing conections:
![Diagram](./.img/diagram.png)

in fact you can see the full diagram a functionality in [TinKerCad](https://www.tinkercad.com/things/7mlP2UDYyzD-funky-jaban-bojo/editel?sharecode=EhYsz5FwVbqC-q12JIIRBXkEeUxudlwEwnC_sotVpO0)

## Usage
You need to run the following commands

### `pio run`
This compile the code

```bash
pio run
```

### `pio run -t upload`
This upload to the board

```bash
pio run -t upload
```

## Contributing
Pull requests are welcome. For major changes, please open an issue first to discuss what you would like to change.

Please make sure to update tests as appropriate.

## License
[MIT](https://choosealicense.com/licenses/mit/)
