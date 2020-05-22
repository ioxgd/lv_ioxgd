#include <IOXGD.h>
#include "lv_demo_benchmark.h"

void setup() {
  gd.begin(SETUP_LVGL);

  lv_demo_benchmark();

  gd.startFreeRTOS();
}

void loop() { }
