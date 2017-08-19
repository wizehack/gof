################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/AnotherReceiver.cpp \
../src/Command.cpp \
../src/CommandPattern.cpp \
../src/MacroCommand.cpp \
../src/Receiver.cpp 

OBJS += \
./src/AnotherReceiver.o \
./src/Command.o \
./src/CommandPattern.o \
./src/MacroCommand.o \
./src/Receiver.o 

CPP_DEPS += \
./src/AnotherReceiver.d \
./src/Command.d \
./src/CommandPattern.d \
./src/MacroCommand.d \
./src/Receiver.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


