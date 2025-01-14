#pragma once

#include <pico-misc/types.h>

struct _HalRegs
{
    u64 r15;
    u64 r14;
    u64 r13;
    u64 r12;
    u64 r11;
    u64 r10;
    u64 r9;
    u64 r8;
    u64 rbp;
    u64 rdi;
    u64 rsi;
    u64 rdx;
    u64 rcx;
    u64 rbx;
    u64 rax;

    u64 intno;
    u64 err;

    u64 rip;
    u64 cs;
    u64 rflags;
    u64 rsp;
    u64 ss;
} packed;