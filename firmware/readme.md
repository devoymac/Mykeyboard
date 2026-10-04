# Mykeyboard

Teclado ergonómico split (cableado) con QMK.

- **Layout:** ISO-ES, 81 teclas (39 izquierda + 42 derecha), columnar stagger
- **MCU:** 2× RP2040-Zero (uno por mitad), comunicación por TRRS
- **Mitad izquierda (master):** OLED 128x32 (I2C)
- **Mitad derecha (slave):** encoder EC11
- **Switches:** Outemu Silent Lemon V3 (soldados)

## Matriz (ambas mitades, misma asignación)

| | GPIO |
|---|---|
| Filas (row 0-5) | GP0, GP1, GP2, GP3, GP4, GP5 |
| Columnas (col 0-6) | GP6, GP7, GP8, GP9, GP10, GP11, GP12 |

## Pines por mitad

**Izquierda (master):**
- OLED: SDA=GP13, SCL=GP14
- TRRS: TX=GP26, RX=GP27

**Derecha (slave):**
- Encoder: A=GP13, B=GP14, SW=GP15
- TRRS: T=GP26, R1=GP27

## Compilar

```sh
qmk compile -kb mykeyboard -km default
```

## Mano (EE_HANDS)

Ambas mitades usan la misma matriz, así que la mano se fija por EEPROM:

```sh
qmk flash -kb mykeyboard -km default -bl uf2-split-left
qmk flash -kb mykeyboard -km default -bl uf2-split-right
```
