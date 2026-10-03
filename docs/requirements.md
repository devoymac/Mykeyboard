# Requisitos del teclado

Objetivo: teclado ergonómico split de diseño propio. Requisitos recogidos del usuario (2026-10-02).

## Layout
- Split ergonómico.
- Layout "común"/estándar: que tenga la mayoría de teclas.
- Fila de números completa (1-9, 0).
- **Layout ISO** (por la tecla Ñ, imprescindible).
- Pendiente de definir: tamaño exacto, columnar stagger, thumb clusters, número total de teclas.

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

## Pantalla
- OLED **128x32** (I2C). Suficiente para capa, mayúsculas, WPM, etc.

## Conectividad
- **Cableado** (USB). Se descarta inalámbrico/Bluetooth (decisión 2026-10-02).
- **Hub USB integrado**: el teclado debe tener al menos un puerto USB extra para conectar periféricos (ratón, pendrive, etc.). Implica un chip hub USB en el diseño.

## Hardware elegido
- **Controlador**: RP2040-Zero (Waveshare) por mitad. Cableado, USB-C, 4 MB flash, 20 GPIO.
- **Switches**: Outemu Silent Lemon V3 (táctil silencioso), **soldados** (sin sockets hot-swap).
- **Hub USB**: chip FE1.1s (u otro hub USB) para el puerto extra.
- **Firmware**: QMK.

## Implicaciones técnicas
- **Layout ISO**: la tecla Ñ define el layout ISO (Enter en forma de L, Ñ junto a la L). Afecta al diseño del PCB y a las keycaps.
- **PrtSc**: poco común en teclados custom; se puede poner como tecla física o en una capa (Fn).
- **Split**: cada mitad lleva su controlador (2 RP2040-Zero), conectadas por TRRS.
- **Hub USB**: el chip hub (FE1.1s) va entre el PC y el teclado para dar el puerto extra de ratón/pendrive.
- **Sin batería**: al ser cableado, no hay que integrar LiPo ni carga.
