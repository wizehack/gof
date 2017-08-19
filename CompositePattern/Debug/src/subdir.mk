################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Component.cpp \
../src/Composite.cpp \
../src/CompositePattern.cpp \
../src/Leaf.cpp 

OBJS += \
./src/Component.o \
./src/Composite.o \
./src/CompositePattern.o \
./src/Leaf.o 

CPP_DEPS += \
./src/Component.d \
./src/Composite.d \
./src/CompositePattern.d \
./src/Leaf.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


