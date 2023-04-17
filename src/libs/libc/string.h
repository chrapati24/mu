#pragma once

#include <mu-base/types.h>

char *strrchr(const char *s, int c);

usize strlen(cstr s);

void *memset(void *s, int c, usize n);

void *memcpy(void *dest, const void *src, usize n);

int memcmp(const void *s1, const void *s2, usize n);

int strncmp(const char *s1, const char *s2, usize n);

int strcmp(const char *s1, const char *s2);