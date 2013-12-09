
#include <stdint.h>

void i2c_init(void);
void i2c_OLED_send_cmd(uint8_t command);
void i2c_OLED_send_byte(uint8_t val);
