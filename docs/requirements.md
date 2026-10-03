# Requisitos del teclado

Objetivo: teclado ergonómico split de diseño propio. Requisitos recogidos del usuario (2026-10-02).

## Layout
- Split ergonómico.
- Layout "común"/estándar: que tenga la mayoría de teclas.
- Fila de números completa (1-9, 0).
- Pendiente de definir: tamaño exacto, columnar stagger, thumb clusters, número total de teclas.

## Pantalla
- Pantalla integrada (screen). Típicamente OLED 128x32 o 128x64 en teclados split.

## Conectividad
- **Cableado** (USB). Se descarta inalámbrico/Bluetooth (decisión 2026-10-02).
- **Hub USB integrado**: el teclado debe tener al menos un puerto USB extra para conectar periféricos (ratón, pendrive, etc.). Implica un chip hub USB en el diseño.

## Implicaciones técnicas (a decidir)
- **Controlador**: al ser cableado, un Pro Micro / Elite-C (ATmega32U4) o RP2040 es suficiente. No hace falta nRF52840.
- **Firmware**: QMK (cableado) es la vía natural.
- **Hub USB**: conectar periféricos (ratón, pendrive) por el teclado requiere un chip hub USB (p. ej. USB2513, FE1.1s) y añade complejidad de diseño.
- **Sin batería**: al ser cableado, no hay que integrar LiPo ni carga.
