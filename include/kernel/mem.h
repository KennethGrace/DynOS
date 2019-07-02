#include <stdint.h>

typedef struct {
    uint8_t allocated: 1;
    uint8_t kernel_page: 1;
    uint32_t reserved: 30;
} page_flags_t;
