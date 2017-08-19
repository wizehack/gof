################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Alba.cpp \
../src/Bartender.cpp \
../src/BridgePattern.cpp \
../src/CocktailMaker.cpp \
../src/Master.cpp 

OBJS += \
./src/Alba.o \
./src/Bartender.o \
./src/BridgePattern.o \
./src/CocktailMaker.o \
./src/Master.o 

CPP_DEPS += \
./src/Alba.d \
./src/Bartender.d \
./src/BridgePattern.d \
./src/CocktailMaker.d \
./src/Master.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


