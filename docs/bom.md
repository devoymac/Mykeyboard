# BOM — Lista de materiales

Teclado split ergonómico, placa única partida en dos mitades. Cantidades basadas en el layout (~38-45 teclas por mitad).

## Electrónica

> **USB-C**: se usa el puerto del propio RP2040-Zero de la mitad master (no hace falta receptáculo USB-C aparte ni resistencias CC). El cable del PC se enchufa directo al puerto del RP2040-Zero.

| Ref | Componente | Cant. | Notas |
|-----|-----------|-------|-------|
| U1, U2 | RP2040-Zero (Waveshare) | 2 | Uno por mitad. |
| SW | Outemu Silent Lemon V3 (táctil silencioso) | ~83 | Según layout; pedir lote de 90 o 110 para repuestos. |
| D1..Dn | Diodo 1N4148 (SMD SOD-123 o DO-35) | ~83 | Uno por tecla (matriz), no incluidas con switches. |
| J | OLED 128x32 (I2C) | 1 | Mitad izquierda. |
| RV1 | Encoder rotatorio EC11 + pulsador | 1 | Mitad derecha (volumen / pausa / siguiente). |
| J1, J2 | Jack audio 3.5mm TRRS (PJ-320A) | 2 | Conectan las mitades. |
| R | Resistencias varias (pull-ups I2C, etc.) | ~6 | Desacople y pull-ups. |
| C | Condensadores 0.1µF / desacople | ~10 | Alimentación. |

## Mecánica / Otros

| Componente | Cant. | Notas |
|-----------|-------|-------|
| Cable TRRS 3.5mm | 1 | Une las dos mitades. |
| Cable USB-C | 1 | Al PC. |
| Keycaps | ~83 | Set ISO-ES completo (con Ñ, Ç, etc.). |
| Plate / carcasa (impresa o metal) | 1-2 | Placa superior para los switches. |
| Carcasa 3D (opcional) | 2 | Cases izquierdo/derecho. |
| Tornillos + insertos | ~ | Según carcasa. |

## Estimación de coste (componentes, sin keycaps)

- Controladores: ~4 € (2× RP2040-Zero)
- Switches: ~19 € (lote 90)
- Diodos: ~3 €
- OLED + encoder: ~6 €
- Jacks TRRS, USB-C, discretos: ~5 €
- **Total electrónica: ~37 €** (sin keycaps ni carcasa)

> Las cantidades de teclas son orientativas; cuadrar con el layout definitivo en [docs/layout.md](layout.md).
