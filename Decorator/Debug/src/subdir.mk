################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Decorator.cpp \
../src/LOVEPoster.cpp \
../src/Main.cpp \
../src/Poster.cpp \
../src/TeamJangDecorator.cpp 

OBJS += \
./src/Decorator.o \
./src/LOVEPoster.o \
./src/Main.o \
./src/Poster.o \
./src/TeamJangDecorator.o 

CPP_DEPS += \
./src/Decorator.d \
./src/LOVEPoster.d \
./src/Main.d \
./src/Poster.d \
./src/TeamJangDecorator.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


