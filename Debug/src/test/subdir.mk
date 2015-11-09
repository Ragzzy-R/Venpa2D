################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/test/HelloTest.cpp 

OBJS += \
./src/test/HelloTest.o 

CPP_DEPS += \
./src/test/HelloTest.d 


# Each subdirectory must supply rules for building sources it contributes
src/test/%.o: ../src/test/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I/usr/include/c++/5.2.0 -I/usr/include/c++/5.2.0/bits -I"/home/raghuram/workspaces/C++/Venpa2D/src/includes" -I"/home/raghuram/workspaces/C++/Venpa2D/src/test/includes" -I/usr/include/SDL2 -O0 -g3 -Wall -c -fmessage-length=0 -std=c++14 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


