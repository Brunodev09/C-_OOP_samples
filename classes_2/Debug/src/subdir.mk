################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/class.cpp \
../src/friendClasses.cpp \
../src/position.cpp \
../src/staticVarClasses.cpp 

OBJS += \
./src/class.o \
./src/friendClasses.o \
./src/position.o \
./src/staticVarClasses.o 

CPP_DEPS += \
./src/class.d \
./src/friendClasses.d \
./src/position.d \
./src/staticVarClasses.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


