################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
C:/PP/Dydaktyka/MATERIALY/HMI_MATERIALY/HMI-M2M/STM32F7508-DK/MyFirstTouchGFXApp/TouchGFX/gui/src/common/FrontendApplication.cpp \
C:/PP/Dydaktyka/MATERIALY/HMI_MATERIALY/HMI-M2M/STM32F7508-DK/MyFirstTouchGFXApp/TouchGFX/gui/src/model/Model.cpp \
C:/PP/Dydaktyka/MATERIALY/HMI_MATERIALY/HMI-M2M/STM32F7508-DK/MyFirstTouchGFXApp/TouchGFX/gui/src/mainscreen_screen/mainScreenPresenter.cpp \
C:/PP/Dydaktyka/MATERIALY/HMI_MATERIALY/HMI-M2M/STM32F7508-DK/MyFirstTouchGFXApp/TouchGFX/gui/src/mainscreen_screen/mainScreenView.cpp 

OBJS += \
./Application/User/gui/FrontendApplication.o \
./Application/User/gui/Model.o \
./Application/User/gui/mainScreenPresenter.o \
./Application/User/gui/mainScreenView.o 

CPP_DEPS += \
./Application/User/gui/FrontendApplication.d \
./Application/User/gui/Model.d \
./Application/User/gui/mainScreenPresenter.d \
./Application/User/gui/mainScreenView.d 


# Each subdirectory must supply rules for building sources it contributes
Application/User/gui/FrontendApplication.o: C:/PP/Dydaktyka/MATERIALY/HMI_MATERIALY/HMI-M2M/STM32F7508-DK/MyFirstTouchGFXApp/TouchGFX/gui/src/common/FrontendApplication.cpp Application/User/gui/subdir.mk
	arm-none-eabi-g++ "$<" -mcpu=cortex-m7 -std=gnu++14 -g3 -DUSE_HAL_DRIVER -DSTM32F750xx -DDEBUG -c -I../../Core/Inc -I../../Drivers/CMSIS/Include -I../../Drivers/BSP/STM32F7508-Discovery -I../../TouchGFX/target -I../../Drivers/CMSIS/Device/ST/STM32F7xx/Include -I../../Drivers/STM32F7xx_HAL_Driver/Inc -I../../TouchGFX/App -I../../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS -I../../TouchGFX/target/generated -I../../Drivers/STM32F7xx_HAL_Driver/Inc/Legacy -I../../Drivers/BSP/Components/Common -I../../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM7/r0p1 -I../../Middlewares/Third_Party/FreeRTOS/Source/include -I../../Middlewares/ST/touchgfx/framework/include -I../../TouchGFX/generated/fonts/include -I../../TouchGFX/generated/gui_generated/include -I../../TouchGFX/generated/images/include -I../../TouchGFX/generated/texts/include -I../../TouchGFX/gui/include -I../../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2 -I../../TouchGFX/generated/videos/include -Os -ffunction-sections -fdata-sections -fno-exceptions -fno-rtti -fno-use-cxa-atexit -Wall -femit-class-debug-always -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Application/User/gui/Model.o: C:/PP/Dydaktyka/MATERIALY/HMI_MATERIALY/HMI-M2M/STM32F7508-DK/MyFirstTouchGFXApp/TouchGFX/gui/src/model/Model.cpp Application/User/gui/subdir.mk
	arm-none-eabi-g++ "$<" -mcpu=cortex-m7 -std=gnu++14 -g3 -DUSE_HAL_DRIVER -DSTM32F750xx -DDEBUG -c -I../../Core/Inc -I../../Drivers/CMSIS/Include -I../../Drivers/BSP/STM32F7508-Discovery -I../../TouchGFX/target -I../../Drivers/CMSIS/Device/ST/STM32F7xx/Include -I../../Drivers/STM32F7xx_HAL_Driver/Inc -I../../TouchGFX/App -I../../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS -I../../TouchGFX/target/generated -I../../Drivers/STM32F7xx_HAL_Driver/Inc/Legacy -I../../Drivers/BSP/Components/Common -I../../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM7/r0p1 -I../../Middlewares/Third_Party/FreeRTOS/Source/include -I../../Middlewares/ST/touchgfx/framework/include -I../../TouchGFX/generated/fonts/include -I../../TouchGFX/generated/gui_generated/include -I../../TouchGFX/generated/images/include -I../../TouchGFX/generated/texts/include -I../../TouchGFX/gui/include -I../../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2 -I../../TouchGFX/generated/videos/include -Os -ffunction-sections -fdata-sections -fno-exceptions -fno-rtti -fno-use-cxa-atexit -Wall -femit-class-debug-always -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Application/User/gui/mainScreenPresenter.o: C:/PP/Dydaktyka/MATERIALY/HMI_MATERIALY/HMI-M2M/STM32F7508-DK/MyFirstTouchGFXApp/TouchGFX/gui/src/mainscreen_screen/mainScreenPresenter.cpp Application/User/gui/subdir.mk
	arm-none-eabi-g++ "$<" -mcpu=cortex-m7 -std=gnu++14 -g3 -DUSE_HAL_DRIVER -DSTM32F750xx -DDEBUG -c -I../../Core/Inc -I../../Drivers/CMSIS/Include -I../../Drivers/BSP/STM32F7508-Discovery -I../../TouchGFX/target -I../../Drivers/CMSIS/Device/ST/STM32F7xx/Include -I../../Drivers/STM32F7xx_HAL_Driver/Inc -I../../TouchGFX/App -I../../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS -I../../TouchGFX/target/generated -I../../Drivers/STM32F7xx_HAL_Driver/Inc/Legacy -I../../Drivers/BSP/Components/Common -I../../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM7/r0p1 -I../../Middlewares/Third_Party/FreeRTOS/Source/include -I../../Middlewares/ST/touchgfx/framework/include -I../../TouchGFX/generated/fonts/include -I../../TouchGFX/generated/gui_generated/include -I../../TouchGFX/generated/images/include -I../../TouchGFX/generated/texts/include -I../../TouchGFX/gui/include -I../../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2 -I../../TouchGFX/generated/videos/include -Os -ffunction-sections -fdata-sections -fno-exceptions -fno-rtti -fno-use-cxa-atexit -Wall -femit-class-debug-always -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Application/User/gui/mainScreenView.o: C:/PP/Dydaktyka/MATERIALY/HMI_MATERIALY/HMI-M2M/STM32F7508-DK/MyFirstTouchGFXApp/TouchGFX/gui/src/mainscreen_screen/mainScreenView.cpp Application/User/gui/subdir.mk
	arm-none-eabi-g++ "$<" -mcpu=cortex-m7 -std=gnu++14 -g3 -DUSE_HAL_DRIVER -DSTM32F750xx -DDEBUG -c -I../../Core/Inc -I../../Drivers/CMSIS/Include -I../../Drivers/BSP/STM32F7508-Discovery -I../../TouchGFX/target -I../../Drivers/CMSIS/Device/ST/STM32F7xx/Include -I../../Drivers/STM32F7xx_HAL_Driver/Inc -I../../TouchGFX/App -I../../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS -I../../TouchGFX/target/generated -I../../Drivers/STM32F7xx_HAL_Driver/Inc/Legacy -I../../Drivers/BSP/Components/Common -I../../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM7/r0p1 -I../../Middlewares/Third_Party/FreeRTOS/Source/include -I../../Middlewares/ST/touchgfx/framework/include -I../../TouchGFX/generated/fonts/include -I../../TouchGFX/generated/gui_generated/include -I../../TouchGFX/generated/images/include -I../../TouchGFX/generated/texts/include -I../../TouchGFX/gui/include -I../../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2 -I../../TouchGFX/generated/videos/include -Os -ffunction-sections -fdata-sections -fno-exceptions -fno-rtti -fno-use-cxa-atexit -Wall -femit-class-debug-always -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Application-2f-User-2f-gui

clean-Application-2f-User-2f-gui:
	-$(RM) ./Application/User/gui/FrontendApplication.d ./Application/User/gui/FrontendApplication.o ./Application/User/gui/FrontendApplication.su ./Application/User/gui/Model.d ./Application/User/gui/Model.o ./Application/User/gui/Model.su ./Application/User/gui/mainScreenPresenter.d ./Application/User/gui/mainScreenPresenter.o ./Application/User/gui/mainScreenPresenter.su ./Application/User/gui/mainScreenView.d ./Application/User/gui/mainScreenView.o ./Application/User/gui/mainScreenView.su

.PHONY: clean-Application-2f-User-2f-gui

