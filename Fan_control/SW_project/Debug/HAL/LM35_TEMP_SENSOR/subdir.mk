################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../HAL/LM35_TEMP_SENSOR/lm35_temperature_source.c 

OBJS += \
./HAL/LM35_TEMP_SENSOR/lm35_temperature_source.o 

C_DEPS += \
./HAL/LM35_TEMP_SENSOR/lm35_temperature_source.d 


# Each subdirectory must supply rules for building sources it contributes
HAL/LM35_TEMP_SENSOR/%.o: ../HAL/LM35_TEMP_SENSOR/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=1000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


