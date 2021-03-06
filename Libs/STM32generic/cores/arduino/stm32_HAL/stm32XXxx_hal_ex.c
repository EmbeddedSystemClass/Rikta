#include "stm32_build_defines.h"

// Ignore HAL errors when compiling with -Werror
#pragma GCC diagnostic ignored "-Wsign-compare"

#ifdef STM32F0
    #include "stm32f0xx_hal_adc_ex.c"
    #include "stm32f0xx_hal_cortex.c"
    #include "stm32f0xx_hal_crc_ex.c"
    #include "stm32f0xx_hal_dac_ex.c"
    #include "stm32f0xx_hal_flash_ex.c"
    #include "stm32f0xx_hal_i2c_ex.c"
    #include "stm32f0xx_hal_pcd_ex.c"
    #include "stm32f0xx_hal_pwr_ex.c"
    #include "stm32f0xx_hal_rcc_ex.c"
    #include "stm32f0xx_hal_rtc_ex.c"
    #include "stm32f0xx_hal_smartcard_ex.c"
    #include "stm32f0xx_hal_spi_ex.c"
    #include "stm32f0xx_hal_tim_ex.c"
    #include "stm32f0xx_hal_uart_ex.c"
#endif
#ifdef STM32F1
    #include "stm32f1xx_hal_adc_ex.c"
    #include "stm32f1xx_hal_cortex.c"
    #include "stm32f1xx_hal_dac_ex.c"
    #include "stm32f1xx_hal_flash_ex.c"
    #include "stm32f1xx_hal_gpio_ex.c"
    #include "stm32f1xx_hal_pcd_ex.c"
    #include "stm32f1xx_hal_rcc_ex.c"
    #include "stm32f1xx_hal_rtc_ex.c"
    #include "stm32f1xx_hal_spi_ex.c"
    #include "stm32f1xx_hal_tim_ex.c"
#endif
#ifdef STM32F2
    #include "stm32f2xx_hal_adc_ex.c"
    #include "stm32f2xx_hal_cortex.c"
    #include "stm32f2xx_hal_dac_ex.c"
    #include "stm32f2xx_hal_dma_ex.c"
    #include "stm32f2xx_hal_flash_ex.c"
    #include "stm32f2xx_hal_pcd_ex.c"
    #include "stm32f2xx_hal_pwr_ex.c"
    #include "stm32f2xx_hal_rcc_ex.c"
    #include "stm32f2xx_hal_rtc_ex.c"
    #include "stm32f2xx_hal_tim_ex.c"
#endif
#ifdef STM32F3
    #include "stm32f3xx_hal_adc_ex.c"
    #include "stm32f3xx_hal_cortex.c"
    #include "stm32f3xx_hal_crc_ex.c"
    #include "stm32f3xx_hal_dac_ex.c"
    #include "stm32f3xx_hal_flash_ex.c"
    #include "stm32f3xx_hal_i2c_ex.c"
    #include "stm32f3xx_hal_i2s_ex.c"
    #include "stm32f3xx_hal_opamp_ex.c"
    #include "stm32f3xx_hal_pcd_ex.c"
    #include "stm32f3xx_hal_pwr_ex.c"
    #include "stm32f3xx_hal_rcc_ex.c"
    #include "stm32f3xx_hal_rtc_ex.c"
    #include "stm32f3xx_hal_smartcard_ex.c"
    #include "stm32f3xx_hal_spi_ex.c"
    #include "stm32f3xx_hal_tim_ex.c"
    #include "stm32f3xx_hal_uart_ex.c"
#endif
#ifdef STM32F4
    #include "stm32f4xx_hal_adc_ex.c"
    #include "stm32f4xx_hal_cortex.c"
    #include "stm32f4xx_hal_cryp_ex.c"
    #include "stm32f4xx_hal_dac_ex.c"
    #include "stm32f4xx_hal_dcmi_ex.c"
    #include "stm32f4xx_hal_dma_ex.c"
    #include "stm32f4xx_hal_flash_ex.c"
    #include "stm32f4xx_hal_fmpi2c_ex.c"
    #include "stm32f4xx_hal_hash_ex.c"
    #include "stm32f4xx_hal_i2c_ex.c"
    #include "stm32f4xx_hal_i2s_ex.c"
    #include "stm32f4xx_hal_ltdc_ex.c"
    #include "stm32f4xx_hal_pcd_ex.c"
    #include "stm32f4xx_hal_pwr_ex.c"
    #include "stm32f4xx_hal_rcc_ex.c"
    #include "stm32f4xx_hal_rtc_ex.c"
    #include "stm32f4xx_hal_sai_ex.c"
    #include "stm32f4xx_hal_tim_ex.c"
#endif
#ifdef STM32F7
    #include "stm32f7xx_hal_adc_ex.c"
    #include "stm32f7xx_hal_cortex.c"
    #include "stm32f7xx_hal_crc_ex.c"
    #include "stm32f7xx_hal_cryp_ex.c"
    #include "stm32f7xx_hal_dac_ex.c"
    #include "stm32f7xx_hal_dcmi_ex.c"
    #include "stm32f7xx_hal_dma_ex.c"
    #include "stm32f7xx_hal_flash_ex.c"
    #include "stm32f7xx_hal_hash_ex.c"
    #include "stm32f7xx_hal_i2c_ex.c"
    #include "stm32f7xx_hal_ltdc_ex.c"
    #include "stm32f7xx_hal_pcd_ex.c"
    #include "stm32f7xx_hal_pwr_ex.c"
    #include "stm32f7xx_hal_rcc_ex.c"
    #include "stm32f7xx_hal_rtc_ex.c"
    #include "stm32f7xx_hal_sai_ex.c"
    #include "stm32f7xx_hal_smartcard_ex.c"
    #include "stm32f7xx_hal_tim_ex.c"
#endif
#ifdef STM32L0
    #include "stm32l0xx_hal_adc_ex.c"
    #include "stm32l0xx_hal_comp_ex.c"
    #include "stm32l0xx_hal_cortex.c"
    #include "stm32l0xx_hal_crc_ex.c"
    #include "stm32l0xx_hal_cryp_ex.c"
    #include "stm32l0xx_hal_dac_ex.c"
    #include "stm32l0xx_hal_flash_ex.c"
    #include "stm32l0xx_hal_i2c_ex.c"
    #include "stm32l0xx_hal_pcd_ex.c"
    #include "stm32l0xx_hal_pwr_ex.c"
    #include "stm32l0xx_hal_rcc_ex.c"
    #include "stm32l0xx_hal_rtc_ex.c"
    #include "stm32l0xx_hal_smartcard_ex.c"
    #include "stm32l0xx_hal_tim_ex.c"
    #include "stm32l0xx_hal_uart_ex.c"
#endif
#ifdef STM32L1
    #include "stm32l1xx_hal_adc_ex.c"
    #include "stm32l1xx_hal_cortex.c"
    #include "stm32l1xx_hal_cryp_ex.c"
    #include "stm32l1xx_hal_dac_ex.c"
    #include "stm32l1xx_hal_flash_ex.c"
    #include "stm32l1xx_hal_opamp_ex.c"
    #include "stm32l1xx_hal_pcd_ex.c"
    #include "stm32l1xx_hal_pwr_ex.c"
    #include "stm32l1xx_hal_rcc_ex.c"
    #include "stm32l1xx_hal_rtc_ex.c"
    #include "stm32l1xx_hal_spi_ex.c"
    #include "stm32l1xx_hal_tim_ex.c"
#endif
#ifdef STM32L4
    #include "stm32l4xx_hal_adc_ex.c"
    #include "stm32l4xx_hal_cortex.c"
    #include "stm32l4xx_hal_crc_ex.c"
    #include "stm32l4xx_hal_cryp_ex.c"
    #include "stm32l4xx_hal_dac_ex.c"
    #include "stm32l4xx_hal_flash_ex.c"
    #include "stm32l4xx_hal_hash_ex.c"
    #include "stm32l4xx_hal_i2c_ex.c"
    #include "stm32l4xx_hal_opamp_ex.c"
    #include "stm32l4xx_hal_pcd_ex.c"
    #include "stm32l4xx_hal_pwr_ex.c"
    #include "stm32l4xx_hal_rcc_ex.c"
    #include "stm32l4xx_hal_rtc_ex.c"
    #include "stm32l4xx_hal_smartcard_ex.c"
    #include "stm32l4xx_hal_spi_ex.c"
    #include "stm32l4xx_hal_tim_ex.c"
    #include "stm32l4xx_hal_uart_ex.c"
#endif
