################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/AbstractFactory.cpp \
../src/AbstractFactoryPattern.cpp \
../src/AbstractProductA.cpp \
../src/AbstractProductB.cpp \
../src/ConcreteFactory1.cpp \
../src/ConcreteFactory2.cpp \
../src/ConcreteProductA1.cpp \
../src/ConcreteProductA2.cpp \
../src/ConcreteProductB1.cpp \
../src/ConcreteProductB2.cpp 

OBJS += \
./src/AbstractFactory.o \
./src/AbstractFactoryPattern.o \
./src/AbstractProductA.o \
./src/AbstractProductB.o \
./src/ConcreteFactory1.o \
./src/ConcreteFactory2.o \
./src/ConcreteProductA1.o \
./src/ConcreteProductA2.o \
./src/ConcreteProductB1.o \
./src/ConcreteProductB2.o 

CPP_DEPS += \
./src/AbstractFactory.d \
./src/AbstractFactoryPattern.d \
./src/AbstractProductA.d \
./src/AbstractProductB.d \
./src/ConcreteFactory1.d \
./src/ConcreteFactory2.d \
./src/ConcreteProductA1.d \
./src/ConcreteProductA2.d \
./src/ConcreteProductB1.d \
./src/ConcreteProductB2.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


