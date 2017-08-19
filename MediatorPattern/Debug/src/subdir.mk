################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/ChatMediator.cpp \
../src/Colleague.cpp \
../src/Mediator.cpp \
../src/MediatorPattern.cpp \
../src/User.cpp 

OBJS += \
./src/ChatMediator.o \
./src/Colleague.o \
./src/Mediator.o \
./src/MediatorPattern.o \
./src/User.o 

CPP_DEPS += \
./src/ChatMediator.d \
./src/Colleague.d \
./src/Mediator.d \
./src/MediatorPattern.d \
./src/User.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


