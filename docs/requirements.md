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
- **Dual**: inalámbrico (Bluetooth) Y cableado (USB). Implica elegir controlador que soporte ambos (p. ej. nice!nano / nRF52840) y firmware ZMK.
- Al menos un puerto USB en el teclado.
- Poder conectar 1-2 dispositivos USB a través del teclado (requiere hub USB integrado).

## Implicaciones técnicas (a decidir)
- **Controlador**: para dual BT+cable, un nRF52840 (nice!nano) es la opción habitual; un Pro Micro/Elite-C solo da cableado.
- **Firmware**: ZMK (inalámbrico) vs QMK (cableado). Si se quiere dual, ZMK es la vía natural.
- **Hub USB**: conectar 1-2 dispositivos USB por el teclado añade un chip hub USB y complejidad de diseño.
- **Batería**: si es inalámbrico, hay que integrar batería LiPo y carga.
