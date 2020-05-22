#include <IOXGD.h>
#include "lv_demo_widgets.h"

void setup() {
  gd.begin(SETUP_LVGL);

  lv_demo_widgets();

  gd.startFreeRTOS();
}

void loop() { }
