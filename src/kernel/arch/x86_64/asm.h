#pragma once

#include <stdint.h>

#define asm_read_cr(n, reg) __asm__ volatile("mov %%cr" #n ", %0" \
                                             : "=r"(reg))

#define asm_write_cr(n, x) __asm__ volatile("mov %0, %%cr" #n ::"r"((x)))

uint8_t asm_in8(uint16_t port);
void asm_out8(uint16_t port, uint8_t data);