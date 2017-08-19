################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Main.cpp \
../src/TCPClosed.cpp \
../src/TCPConnection.cpp \
../src/TCPEstablished.cpp \
../src/TCPListen.cpp \
../src/TCPState.cpp 

OBJS += \
./src/Main.o \
./src/TCPClosed.o \
./src/TCPConnection.o \
./src/TCPEstablished.o \
./src/TCPListen.o \
./src/TCPState.o 

CPP_DEPS += \
./src/Main.d \
./src/TCPClosed.d \
./src/TCPConnection.d \
./src/TCPEstablished.d \
./src/TCPListen.d \
./src/TCPState.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


