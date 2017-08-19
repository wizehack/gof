################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Airline.cpp \
../src/Calender.cpp \
../src/Facade.cpp \
../src/FacadePattern.cpp \
../src/Hotel.cpp 

OBJS += \
./src/Airline.o \
./src/Calender.o \
./src/Facade.o \
./src/FacadePattern.o \
./src/Hotel.o 

CPP_DEPS += \
./src/Airline.d \
./src/Calender.d \
./src/Facade.d \
./src/FacadePattern.d \
./src/Hotel.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


