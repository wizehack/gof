################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/ConcreteElementA.cpp \
../src/ConcreteElementB.cpp \
../src/ConcreteVisitor.cpp \
../src/Element.cpp \
../src/Visitor.cpp \
../src/VisitorPattern.cpp 

OBJS += \
./src/ConcreteElementA.o \
./src/ConcreteElementB.o \
./src/ConcreteVisitor.o \
./src/Element.o \
./src/Visitor.o \
./src/VisitorPattern.o 

CPP_DEPS += \
./src/ConcreteElementA.d \
./src/ConcreteElementB.d \
./src/ConcreteVisitor.d \
./src/Element.d \
./src/Visitor.d \
./src/VisitorPattern.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


