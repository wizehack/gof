################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/AbstractExpression.cpp \
../src/Context.cpp \
../src/InterpreterPattern.cpp \
../src/LifeExpression.cpp \
../src/MoveExpression.cpp \
../src/Robot.cpp 

OBJS += \
./src/AbstractExpression.o \
./src/Context.o \
./src/InterpreterPattern.o \
./src/LifeExpression.o \
./src/MoveExpression.o \
./src/Robot.o 

CPP_DEPS += \
./src/AbstractExpression.d \
./src/Context.d \
./src/InterpreterPattern.d \
./src/LifeExpression.d \
./src/MoveExpression.d \
./src/Robot.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


