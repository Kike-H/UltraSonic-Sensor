# Backend
This is the part for the backend

This API was bootstrapped with [FastApi](https://fastapi.tiangolo.com/) and with [PySerial](https://pythonhosted.org/pyserial/)

## Dependencies

You need the next tools:

### Backend 
1. [Python 3](https://www.python.org/)
2. [Pip](https://pip.pypa.io/en/stable/)
3. Virtual Environment for Python (Opcional)

The last is opcional but we recommend to use a virtual environment.
We are use virtualenv for python 3 you can install with the next line:

```bash
pip install virtualenv
```
or

```bash
pip3 install virtualenv
```

## Usage
### `With Virtualenv` (opcional)
1. Make the virtual-env 

```bash
virtualenv venv
```
2. You need to active the virtual-env

#### `Unix`
```bash
source venv/bin/activate
```
#### `Widnows` 
```bash
.\venv\Scripts\activate.bat
```
### `Install dependencies`
```bash
pip install -r requirements.txt
```
### `Run the server` 
Now you only need to run the server 

go to the folder src and run the next command:


```bash
cd src 
uvicorn app:app --reload
```


## Contributing
Pull requests are welcome. For major changes, please open an issue first to discuss what you would like to change.

Please make sure to update tests as appropriate.

## License
[MIT](https://choosealicense.com/licenses/mit/)
