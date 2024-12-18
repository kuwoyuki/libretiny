/* This file was auto-generated from afw121t.json using boardgen */

#include <Arduino.h>

#ifdef LT_VARIANT_INCLUDE
#include LT_VARIANT_INCLUDE
#endif

// clang-format off
PinInfo lt_arduino_pin_info_list[PINS_COUNT] = {
	// D0: PA14, PWM0, SWCLK
	{PA_14, PIN_GPIO | PIN_IRQ | PIN_PWM | PIN_SWD,                                PIN_NONE, 0},
	// D1: PA15, PWM1, SWDIO
	{PA_15, PIN_GPIO | PIN_IRQ | PIN_PWM | PIN_SWD,                                PIN_NONE, 0},
	// D2: PA00, PWM2
	{PA_0,  PIN_GPIO | PIN_IRQ | PIN_PWM,                                          PIN_NONE, 0},
	// D3: PA12, PWM3
	{PA_12, PIN_GPIO | PIN_IRQ | PIN_PWM,                                          PIN_NONE, 0},
	// D4: PA29, UART2_RX, I2C0_SCL, PWM4
	{PA_29, PIN_GPIO | PIN_IRQ | PIN_PWM | PIN_I2C | PIN_UART,                     PIN_NONE, 0},
	// D5: PA05, PWM4, WAKE1
	{PA_5,  PIN_GPIO | PIN_IRQ | PIN_PWM,                                          PIN_NONE, 0},
	// D6: PA18, UART0_RX, SPI0_SCK, SPI1_SCK, I2C1_SCL, SD_D2, TMR4_TRIG, I2S0_MCK, WAKE0
	{PA_18, PIN_GPIO | PIN_IRQ | PIN_I2C | PIN_I2S | PIN_SPI | PIN_UART,           PIN_NONE, 0},
	// D7: PA19, ADC1, UART0_CTS, SPI0_CS, SPI1_CS, I2C0_SDA, SD_D3, TMR5_TRIG, I2S0_TX
	{PA_19, PIN_GPIO | PIN_IRQ | PIN_I2C | PIN_I2S | PIN_SPI | PIN_UART,           PIN_NONE, 0},
	// D8: PA22, UART0_RTS, SPI0_MISO, SPI1_MISO, I2C0_SCL, SD_D0, PWM5, I2S0_WS, WAKE2
	{PA_22, PIN_GPIO | PIN_IRQ | PIN_PWM | PIN_I2C | PIN_I2S | PIN_SPI | PIN_UART, PIN_NONE, 0},
	// D9: PA23, UART0_TX, SPI0_MOSI, SPI1_MOSI, I2C1_SDA, SD_D1, PWM0, WAKE3
	{PA_23, PIN_GPIO | PIN_IRQ | PIN_PWM | PIN_I2C | PIN_SPI | PIN_UART,           PIN_NONE, 0},
	// D10: PA30, UART2_TX, I2C0_SDA, PWM4
	{PA_30, PIN_GPIO | PIN_IRQ | PIN_PWM | PIN_I2C | PIN_UART,                     PIN_NONE, 0},
};

PinInfo *lt_arduino_pin_gpio_map[] = {
	[0]  = &(lt_arduino_pin_info_list[2]),  // PA_0 (D2)
	[5]  = &(lt_arduino_pin_info_list[5]),  // PA_5 (D5)
	[12] = &(lt_arduino_pin_info_list[3]),  // PA_12 (D3)
	[14] = &(lt_arduino_pin_info_list[0]),  // PA_14 (D0)
	[15] = &(lt_arduino_pin_info_list[1]),  // PA_15 (D1)
	[18] = &(lt_arduino_pin_info_list[6]),  // PA_18 (D6)
	[19] = &(lt_arduino_pin_info_list[7]),  // PA_19 (D7)
	[22] = &(lt_arduino_pin_info_list[8]),  // PA_22 (D8)
	[23] = &(lt_arduino_pin_info_list[9]),  // PA_23 (D9)
	[29] = &(lt_arduino_pin_info_list[4]),  // PA_29 (D4)
	[30] = &(lt_arduino_pin_info_list[10]), // PA_30 (D10)
};
// clang-format on
