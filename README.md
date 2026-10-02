# Mykeyboard — Split Ergo Keyboard

Teclado ergonómico split de diseño propio. Proyecto de hardware abierto: esquemáticos y PCB en KiCad, firmware en QMK/ZMK, y carcasa imprimible en 3D.

## Estado

En desarrollo inicial. Estructura del proyecto montada, KiCad pendiente de instalar.

## Estructura del proyecto

```
Mykeyboard/
├── hardware/          # Diseño electrónico (KiCad)
│   ├── left/          # Mitad izquierda (esquemático + PCB)
│   ├── right/         # Mitad derecha (espejo de la izquierda)
│   └── shared/        # Librerías, símbolos, footprints y plantillas comunes
├── firmware/          # Firmware del teclado (QMK o ZMK)
├── case/              # Carcasa imprimible en 3D (STL / FreeCAD)
├── docs/              # Documentación: guía de montaje, BOM, decisiones
├── tools/             # Scripts de utilidad (generación, automatización)
└── README.md
```

## Hardware

- **KiCad**: versión 10.x (esquemático y PCB).
- **Layout**: split ergonómico (a definir: columnar stagger, thumb clusters, número de teclas).
- **Conexión entre mitades**: a decidir (TRRS, inalámbrico, etc.).

## Firmware

Pendiente de elegir: QMK o ZMK (depende de si el teclado es cableado o inalámbrico).

## Cómo contribuir / desarrollo

1. Clona el repositorio.
2. Abre los proyectos de KiCad en `hardware/left` y `hardware/right`.
3. Documenta cualquier cambio relevante en `docs/`.

## Licencia

Pendiente de decidir (recomendado: CERN-OHL-S para hardware, MIT para firmware).
