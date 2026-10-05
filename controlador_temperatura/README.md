EQUIPO #2 de la materia de Arquitectura y Organización de Computadoras
Ingeniería de Software - Universidad Autónoma de Yucatán

PROYECTO: Sistema automatizado de monitoreo y control de temperatura

Microcontrolador:
Arduino UNO R3 (ATmega328P)

Software:
SimulIDE 1.1.0-SR2
Arduino IDE 2.3.10

Funcionamiento:
Menor a 25 °C  → LED verde
De 25 a 30 °C → LED amarillo
Mayor que 30 °C  → LED rojo + ventilador

Descripción:
El sistema utiliza un potenciómetro como representación de una
entrada de temperatura. El Arduino UNO procesa la lectura analógica
y determina el estado del sistema mediante tres indicadores LED.
Cuando la temperatura supera los 30 °C, activa un ventilador mediante
un transistor NPN.

Para ejecutar:
1. Abrir el archivo .simu en SimulIDE.
2. Verificar/cargar el firmware si es necesario.
3. Iniciar la simulación.
4. Girar el potenciómetro para modificar la temperatura simulada.