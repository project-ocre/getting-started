/*
 * Copyright © 2024 Contributors to Project Ocre, which has been established as Project Ocre a Series of LF Projects, LLC.
 * Distributed by an Apache 2.0 License.
*/

#include <stdio.h>

#include "wa-inc/timer_wasm_app.h"

void update_led(user_timer_t timer) {
  //nbx_toggle_led();
  printf(".\n");
}

// Ocre container entrypoint
void on_init() {
  user_timer_t timer;
  printf("Blinky app initializing.\n");

  timer = api_timer_create(500, true, false, update_led);
  api_timer_restart(timer, 500);
}
