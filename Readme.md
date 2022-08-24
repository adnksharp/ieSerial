# Arduino serial communication

[![K-087.jpg](https://i.postimg.cc/Z5pPyjXg/K-087.jpg)](https://postimg.cc/5X9Qh54q)

Comunicación entre microcontroladores mediante puerto serie.

## Hardware y software necesarios
- Placa de desarrollo nodeMCU ESP8266.
- Placa de desarrollo Arduino MEGA 2560.
- Diplay OLED.
- [Arduino IDE](https://www.arduino.cc/en/software) o [Arduino CLI](https://arduino.github.io/arduino-cli/0.23/installation/).

## Funcionamiento
### `esp`
#### Funciones
- `passw`: Función donde se guarda la contraseña.
- `ssid`: Función donde se guarda el nombre de la red.

#### Funcionamiento
El microcontrolador ESP8266 se conecta a la red WiFi usando `ssid` y `passw`.
Cuando el microcontrolador recibe un mensaje por el puerto serie, prende el LED.

### `mega`
#### Variables
- `oled`: alias para el display OLED.

#### Funcionamiento
Usando el puerto serie 1, el microcontrolador Arduino MEGA imprime en el display OLED el mensaje recibido.
