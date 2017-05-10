#include "blynk.h"
#include "mjs.h"

enum mgos_app_init_result mgos_app_init(void) {
  blynk_init();
  mjs_init();
  return MGOS_APP_INIT_SUCCESS;
}
