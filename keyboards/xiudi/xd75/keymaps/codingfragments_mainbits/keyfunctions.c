#include QMK_KEYBOARD_H

// led_set_user example - you could also turn these on/off in response
// to events in process_record_user or matrix_scan_user
void led_set_user(uint8_t usb_led) {
  if (usb_led & (1 << USB_LED_CAPS_LOCK)) {
    capslock_led_on();
  } else {
    capslock_led_off();
  }
}
