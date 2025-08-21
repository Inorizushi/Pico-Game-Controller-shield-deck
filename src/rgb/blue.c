/**
 * Solid Color
 * @author SpeedyPotato
 **/
void ws2812b_blue(uint32_t counter) {
  for (int i = 0; i < WS2812B_LED_SIZE; ++i) {
    put_pixel(urgb_u32(0,0,255));
  }
}