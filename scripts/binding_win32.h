// This header is used for bindgen to automatically generate the openvr c binding
// bindgen -match openvr_capi.h scripts/binding_win32.h -o binding_win32.rs

//#include <stdbool.h>
#include <stdint.h>
#define bool char

#include "../openvr/headers/openvr_capi.h"
