// Copyright 2026 devoymac
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

// Split: ambas mitades usan la misma matriz -> detección de mano por EEPROM
#define EE_HANDS

// Serial split (TRRS): TX=GP26, RX=GP27
#define SERIAL_USART_FULL_DUPLEX
#define SERIAL_USART_TX_PIN GP26
#define SERIAL_USART_RX_PIN GP27

// OLED (mitad izquierda, I2C): SDA=GP13, SCL=GP14
#define I2C_DRIVER I2CD1
#define I2C1_SDA_PIN GP13
#define I2C1_SCL_PIN GP14

// RP2040
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 500U
