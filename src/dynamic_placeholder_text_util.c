#include "dynamic_placeholder_text_util.h"
#include "global.h"
#include "string_util.h"
#include "text.h"

static EWRAM_DATA const u8 *sStringPointers[8] = {};

void DynamicPlaceholderTextUtil_Reset(void) {
  const u8 **ptr;
  u8 *fillval;
  const u8 **ptr2;

  ptr = sStringPointers;
  fillval = NULL;
  ptr2 = ptr + (ARRAY_COUNT(sStringPointers) - 1);
  do {
    *ptr2-- = fillval;
  } while ((int)ptr2 >= (int)ptr);
}

void DynamicPlaceholderTextUtil_SetPlaceholderPtr(u8 idx, const u8 *ptr) {
  if (idx < ARRAY_COUNT(sStringPointers)) {
    sStringPointers[idx] = ptr;
  }
}

u8 *DynamicPlaceholderTextUtil_ExpandPlaceholders(u8 *dest, const u8 *src) {
  while (*src != EOS) {
    if (*src != CHAR_DYNAMIC) {
      *dest++ = *src++;
    } else {
      src++;
      if (sStringPointers[*src] != NULL) {
        dest = StringCopy(dest, sStringPointers[*src]);
      }
      src++;
    }
  }
  *dest = EOS;
  return dest;
}

const u8 *DynamicPlaceholderTextUtil_GetPlaceholderPtr(u8 idx) {
  return sStringPointers[idx];
}
