################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/graphics/Texture.cpp 

OBJS += \
./src/graphics/Texture.o 

CPP_DEPS += \
./src/graphics/Texture.d 


# Each subdirectory must supply rules for building sources it contributes
src/graphics/%.o: ../src/graphics/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I"D:\workspaces\C++\Venpa2D\src\includes" -I"D:\workspaces\C++\Venpa2D\src\test\includes" -I"C:\winbuilds\include\SDL2" -I"C:\winbuilds\include\c++\4.8.3" -I"D:\workspaces\C++\glew-1.13.0\include" -O0 -g3 -Wall -c -fmessage-length=0 -std=c++11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


