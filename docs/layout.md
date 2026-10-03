# Layout del teclado

88 teclas totales = 44 por mano. Split ISO-ES, placa única que se parte en dos mitades.
Referencia para colocar las teclas en KiCad.

## MITAD IZQUIERDA (44 teclas) — Master (RP2040-Zero + OLED + hub USB + TRRS)

```
Fila F:     F1    F2    F3    F4    F5    F6
Números:    1     2     3     4     5     6
Top:        Q     W     E     R     T
Home:       A     S     D     F     G
Inferior:   Z     X     C     V     B
Modific.:   Tab   Caps  Shift Ctrl  Win   Alt
Pulgar:              [Espacio  AltGr  Fn  Menú]
Nav:        Home  PgUp  PgDn  Del   End   Ins   PrtSc
```

Conteo: F(6) + Números(6) + Top(5) + Home(5) + Inferior(5) + Mod(6) + Pulgar(4) + Nav(7) = 44

## MITAD DERECHA (44 teclas) — Slave (RP2040-Zero + TRRS)

```
Fila F:     F7    F8    F9    F10   F11   F12
Números:    7     8     9     0     -     =
Top:        Y     U     I     O     P
Home:       H     J     K     L     Ñ     ´     ç
Inferior:   N     M     ,     .     /
Modific.:   Enter Bcksp RShift RCtrl Menu  RAlt
Pulgar:              [Espacio   Fn]
Flechas:    ←     ↓     ↑     →
Nav:        Supr  Fin   Inicio
```

Conteo: F(6) + Números(6) + Top(5) + Home(7) + Inferior(5) + Mod(6) + Pulgar(2) + Flechas(4) + Nav(3) = 44

## Notas
- La **tilde (´)**, **ç**, **grave (`)**, **circunflejo (^)** y sus variantes Shift van en las teclas ISO-ES de la fila Top/Home derecha.
- El **AltGr** (para €, @, etc.) va en el pulgar o mod izquierdo.
- **PrtSc**, **ScrLk**, **Pause** y multimedia van en una capa FN.
- Cada mitad lleva su RP2040-Zero y jack TRRS. La mitad master lleva el OLED y el hub USB.

## Matriz (filas × columnas)
- 44 teclas por mitad = matriz de ~6 filas × 7 columnas = 13 pines GPIO por controlador (cabe en los 20 del RP2040-Zero).
