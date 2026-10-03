# Layout del teclado

74 teclas totales = 37 por mitad (simétrico). Split ISO-ES, placa única que se parte en dos mitades.
El clúster de navegación (PrtSc, ScrLk, Pause, Ins, Home, PgUp, Del, End, PgDn) y las **flechas** van en **capas** y se muestran en el OLED.

## MITAD IZQUIERDA (37 teclas) — Master (RP2040-Zero + OLED + TRRS)

```
Fila F:     F1    F2    F3    F4    F5    F6
Números:    1     2     3     4     5     6
Top:        Q     W     E     R     T
Home:       A     S     D     F     G
Inferior:   Z     X     C     V     B
Modific.:   Tab   Caps  Shift Ctrl  Win   Alt
Pulgar:              [Espacio  AltGr  Fn  Menú]
```

Conteo: F(6) + Números(6) + Top(5) + Home(5) + Inferior(5) + Mod(6) + Pulgar(4) = 37

## MITAD DERECHA (37 teclas) — Slave (RP2040-Zero + encoder + TRRS)

```
Fila F:     F7    F8    F9    F10   F11   F12
Números:    7     8     9     0     -     =
Top:        Y     U     I     O     P
Home:       H     J     K     L     Ñ     ´     ç
Inferior:   N     M     ,     .     /
Modific.:   Enter Bcksp RShift RCtrl Menu  RAlt
Pulgar:              [Espacio   Fn]
```

Conteo: F(6) + Números(6) + Top(5) + Home(7) + Inferior(5) + Mod(6) + Pulgar(2) = 37

## Notas
- La **tilde (´)**, **ç**, **grave (`)**, **circunflejo (^)** y sus variantes Shift van en las teclas ISO-ES de la fila Top/Home derecha.
- El **AltGr** (para €, @, etc.) va en el pulgar o mod izquierdo.
- **PrtSc**, **ScrLk**, **Pause** y multimedia van en una capa FN.
- **Encoder rotatorio EC11** en la mitad derecha (volumen + pausa/continuar + siguiente).
- **OLED** en la mitad izquierda. Cada mitad lleva su RP2040-Zero y jack TRRS.
- El layout incluye el clúster de navegación (PrtSc, ScrLk, Pause, Ins, Home, PgUp, Del, End, PgDn) y las flechas. Sin numpad.

## Matriz (filas × columnas)
- 44 teclas por mitad = matriz de ~6 filas × 7 columnas = 13 pines GPIO por controlador (cabe en los 20 del RP2040-Zero).
