################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Factory.cpp \
../src/IDCard.cpp \
../src/IDCardFactory.cpp \
../src/Main.cpp \
../src/Product.cpp 

OBJS += \
./src/Factory.o \
./src/IDCard.o \
./src/IDCardFactory.o \
./src/Main.o \
./src/Product.o 

CPP_DEPS += \
./src/Factory.d \
./src/IDCard.d \
./src/IDCardFactory.d \
./src/Main.d \
./src/Product.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


