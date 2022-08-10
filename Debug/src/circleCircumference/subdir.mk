################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/circleCircumference/Main.c 

OBJS += \
./src/circleCircumference/Main.o 

C_DEPS += \
./src/circleCircumference/Main.d 


# Each subdirectory must supply rules for building sources it contributes
src/circleCircumference/%.o: ../src/circleCircumference/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


