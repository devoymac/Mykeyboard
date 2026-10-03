# Requisitos del teclado

Objetivo: teclado ergonómico split de diseño propio. Requisitos recogidos del usuario (2026-10-02).

## Layout
- Split ergonómico en una sola placa (un solo PCB, un solo controlador por mitad).
- **74 teclas (37 por mitad, simétrico)**, TKL-split: todas las teclas del G513 Carbon menos el numpad. Incluye `/ * - +` (ya en el bloque principal).
- La placa se fabrica de una pieza y se parte en dos mitades (V-cut / mouse bites) tras la fabricación.
- **Navegación y flechas en capas** (PrtSc, ScrLk, Pause, Ins, Home, PgUp, Del, End, PgDn, flechas) — no físicas, se muestran en el OLED.
- Fila de números completa (1-9, 0).
- F1-F12.
- **Layout ISO-ES** completo: Ñ, tilde (´), diéresis (¨), ç/Ç, grave (`), circunflejo (^).
- Pendiente de definir: columnar stagger, thumb clusters, distribución tecla a tecla exacta.

## Teclas imprescindibles
- Tab
- Caps Lock (mayúsculas/minúsculas)
- Shift (izquierdo y derecho)
- Control / Ctrl (izquierdo y derecho)
- Tecla Windows
- Alt y Alt Gr
- Enter
- Borrar (Backspace)
- Flechas (las 4)
- Suprimir (Delete)
- Imprimir pantalla (PrtSc) — para capturas
- Ñ (imprescindible)

## Pantalla / Indicadores
- **OLED 128x32** (I2C) en la **mitad izquierda**. Muestra capa, mayúsculas, WPM, etc.
- Conecta por I2C (GND, VCC, SDA, SCL) — 2 pines GPIO + alimentación.

## Control de medios
- **Encoder rotatorio EC11** en la **mitad derecha**: girar = subir/bajar volumen, pulsar = pausar/continuar, y función "siguiente" (configurable en firmware).
- Conecta al RP2040-Zero por 2 pines (A/B de rotación) + 1 pin (pulsador).

## Conectividad
- **Cableado** (USB). Se descarta inalámbrico/Bluetooth (decisión 2026-10-02).
- **Sin hub USB** (decisión 2026-10-03): el teclado se conecta al PC por un solo USB-C, sin puerto extra para periféricos.

## Hardware elegido
- **Controlador**: RP2040-Zero (Waveshare) por mitad. Cableado, USB-C, 4 MB flash, 20 GPIO.
- **Switches**: Outemu Silent Lemon V3 (táctil silencioso), **soldados** (sin sockets hot-swap).
- **Firmware**: QMK.

## Implicaciones técnicas
- **Layout ISO**: la tecla Ñ define el layout ISO (Enter en forma de L, Ñ junto a la L). Afecta al diseño del PCB y a las keycaps.
- **PrtSc**: poco común en teclados custom; se puede poner como tecla física o en una capa (Fn).
- **Split**: cada mitad lleva su controlador (2 RP2040-Zero), conectadas por TRRS.
- **Sin batería**: al ser cableado, no hay que integrar LiPo ni carga.
