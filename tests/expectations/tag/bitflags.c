#include <stdarg.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>

/**
 * Constants shared by multiple CSS Box Alignment properties
 *
 * These constants match Gecko's `NS_STYLE_ALIGN_*` constants.
 */
struct AlignFlags {
  uint8_t bits;
};
/**
 * 'auto'
 */
#define AlignFlags_AUTO (AlignFlags){ .bits = 0 }
/**
 * 'normal'
 */
#define AlignFlags_NORMAL (AlignFlags){ .bits = 1 }
/**
 * 'start'
 */
#define AlignFlags_START (AlignFlags){ .bits = (1 << 1) }
/**
 * 'end'
 */
#define AlignFlags_END (AlignFlags){ .bits = (1 << 2) }
/**
 * 'flex-start'
 */
#define AlignFlags_FLEX_START (AlignFlags){ .bits = (1 << 3) }

void root(struct AlignFlags flags);
