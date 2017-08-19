################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/BarViewer.cpp \
../src/LGEStock.cpp \
../src/Main.cpp \
../src/NumberViewer.cpp \
../src/Observer.cpp \
../src/Stock.cpp 

OBJS += \
./src/BarViewer.o \
./src/LGEStock.o \
./src/Main.o \
./src/NumberViewer.o \
./src/Observer.o \
./src/Stock.o 

CPP_DEPS += \
./src/BarViewer.d \
./src/LGEStock.d \
./src/Main.d \
./src/NumberViewer.d \
./src/Observer.d \
./src/Stock.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


