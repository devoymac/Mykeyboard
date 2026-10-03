# BOM — Lista de materiales

Teclado split ergonómico, placa única partida en dos mitades. Cantidades basadas en el layout (~38-45 teclas por mitad).

## Electrónica

| Ref | Componente | Cant. | Notas |
|-----|-----------|-------|-------|
| U1, U2 | RP2040-Zero (Waveshare) | 2 | Uno por mitad. |
| SW | Outemu Silent Lemon V3 (táctil silencioso) | ~83 | Según layout; pedir lote de 90 o 110 para repuestos. |
| D1..Dn | Diodo 1N4148 (SMD SOD-123 o DO-35) | ~83 | Uno por tecla (matriz), no incluidas con switches. |
| J | OLED 128x32 (I2C) | 1 | Mitad master. |
| RV1 | Encoder rotatorio EC11 + pulsador | 1 | Mitad master (volumen / pausa / siguiente). |
| J1, J2 | Jack audio 3.5mm TRRS (PJ-320A) | 2 | Conectan las mitades. |
| - | Chip hub USB FE1.1s (o USB2513) | 1 | Mitad master, puerto para ratón/pendrive. |
| - | Cristal 12 MHz (hub) | 1 | FE1.1s necesita oscilador. |
| J | Receptáculo USB-C (maestro) | 1 | Conexión al PC. |
| J | Receptáculo USB hembra (puerto hub) | 1-2 | Para ratón/pendrive. |
| R | Resistencias 5.1kΩ (CC1/CC2 USB-C) | 2 | Detección de fuente USB-C. |
| R | Resistencias varias (pull-ups I2C, etc.) | ~6 | Desacople y pull-ups. |
| C | Condensadores 0.1µF / desacople | ~10 | Alimentación, hub, cristal. |

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
- Hub + cristal + conectores USB: ~6 €
- Jacks TRRS, reset, discretos: ~4 €
- **Total electrónica: ~40 €** (sin keycaps ni carcasa)

> Las cantidades de teclas son orientativas; cuadrar con el layout definitivo en [docs/layout.md](layout.md).
