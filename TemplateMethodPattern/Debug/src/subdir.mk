################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Abstract.cpp \
../src/Concrete.cpp \
../src/Main.cpp 

OBJS += \
./src/Abstract.o \
./src/Concrete.o \
./src/Main.o 

CPP_DEPS += \
./src/Abstract.d \
./src/Concrete.d \
./src/Main.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


