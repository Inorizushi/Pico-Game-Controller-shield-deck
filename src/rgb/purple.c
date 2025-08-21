/**
 * Solid Color
 * @author SpeedyPotato
 **/
void ws2812b_purple(uint32_t counter) {
  for (int i = 0; i < WS2812B_LED_SIZE; ++i) {
    put_pixel(urgb_u32(255,0,255));
  }
}