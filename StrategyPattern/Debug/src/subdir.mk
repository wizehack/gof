################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/ConcreteStrategyA.cpp \
../src/ConcreteStrategyB.cpp \
../src/Context.cpp \
../src/Main.cpp \
../src/Strategy.cpp 

OBJS += \
./src/ConcreteStrategyA.o \
./src/ConcreteStrategyB.o \
./src/Context.o \
./src/Main.o \
./src/Strategy.o 

CPP_DEPS += \
./src/ConcreteStrategyA.d \
./src/ConcreteStrategyB.d \
./src/Context.d \
./src/Main.d \
./src/Strategy.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


