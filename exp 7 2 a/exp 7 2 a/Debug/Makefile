################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL := cmd.exe
RM := rm -rf

USER_OBJS :=

LIBS := 
PROJ := 

O_SRCS := 
C_SRCS := 
S_SRCS := 
S_UPPER_SRCS := 
OBJ_SRCS := 
ASM_SRCS := 
PREPROCESSING_SRCS := 
OBJS := 
OBJS_AS_ARGS := 
C_DEPS := 
C_DEPS_AS_ARGS := 
EXECUTABLES := 
OUTPUT_FILE_PATH :=
OUTPUT_FILE_PATH_AS_ARGS :=
AVR_APP_PATH :=$$$AVR_APP_PATH$$$
QUOTE := "
ADDITIONAL_DEPENDENCIES:=
OUTPUT_FILE_DEP:=

# Every subdirectory with source files must be described here
SUBDIRS := 


# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS +=  \
../exp\ 7\ 2\ a.c


PREPROCESSING_SRCS += 


ASM_SRCS += 


OBJS +=  \
exp\ 7\ 2\ a.o


OBJS_AS_ARGS +=  \
"exp 7 2 a.o"


C_DEPS +=  \
exp\ 7\ 2\ a.d


C_DEPS_AS_ARGS +=  \
"exp 7 2 a.d"


OUTPUT_FILE_PATH +=exp 7 2 a.elf

OUTPUT_FILE_PATH_AS_ARGS +="exp 7 2 a.elf"

ADDITIONAL_DEPENDENCIES:=

OUTPUT_FILE_DEP:= ./makedep.mk

# AVR32/GNU C Compiler
./exp\ 7\ 2\ a.o: .././exp\ 7\ 2\ a.c
	@echo Building file: $<
	@echo Invoking: AVR/GNU C Compiler
	$(QUOTE)E:\avr studio 2010 ide\extensions\Atmel\AVRGCC\3.3.1.27\AVRToolchain\bin\avr-gcc.exe$(QUOTE)  -funsigned-char -funsigned-bitfields -O1 -fpack-struct -fshort-enums -g2 -Wall -c -std=gnu99 -MD -MP -MF "$(@:%.o=%.d)" -MT"$(@:%.o=%.d)"  -mmcu=atmega32  -o"$@" "$<" 
	@echo Finished building: $<


./%.o: .././%.c
	@echo Building file: $<
	@echo Invoking: AVR/GNU C Compiler
	$(QUOTE)E:\avr studio 2010 ide\extensions\Atmel\AVRGCC\3.3.1.27\AVRToolchain\bin\avr-gcc.exe$(QUOTE)  -funsigned-char -funsigned-bitfields -O1 -fpack-struct -fshort-enums -g2 -Wall -c -std=gnu99 -MD -MP -MF "$(@:%.o=%.d)" -MT"$(@:%.o=%.d)"  -mmcu=atmega32  -o"$@" "$<" 
	@echo Finished building: $<



# AVR32/GNU Preprocessing Assembler



# AVR32/GNU Assembler




ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: $(OUTPUT_FILE_PATH) $(ADDITIONAL_DEPENDENCIES)

$(OUTPUT_FILE_PATH): $(OBJS) $(USER_OBJS) $(OUTPUT_FILE_DEP)
	@echo Building target: $@
	@echo Invoking: AVR/GNU C Linker
	$(QUOTE)E:\avr studio 2010 ide\extensions\Atmel\AVRGCC\3.3.1.27\AVRToolchain\bin\avr-gcc.exe$(QUOTE) -o$(OUTPUT_FILE_PATH_AS_ARGS) $(OBJS_AS_ARGS) $(USER_OBJS) $(LIBS) -Wl,-Map="exp 7 2 a.map" -Wl,-lm   -mmcu=atmega32  
	@echo Finished building target: $@
	"E:\avr studio 2010 ide\extensions\Atmel\AVRGCC\3.3.1.27\AVRToolchain\bin\avr-objcopy.exe" -O ihex -R .eeprom -R .fuse -R .lock -R .signature  "exp 7 2 a.elf" "exp 7 2 a.hex"
	"E:\avr studio 2010 ide\extensions\Atmel\AVRGCC\3.3.1.27\AVRToolchain\bin\avr-objcopy.exe" -j .eeprom  --set-section-flags=.eeprom=alloc,load --change-section-lma .eeprom=0  --no-change-warnings -O ihex "exp 7 2 a.elf" "exp 7 2 a.eep" || exit 0
	"E:\avr studio 2010 ide\extensions\Atmel\AVRGCC\3.3.1.27\AVRToolchain\bin\avr-objdump.exe" -h -S "exp 7 2 a.elf" > "exp 7 2 a.lss"
	"E:\avr studio 2010 ide\extensions\Atmel\AVRGCC\3.3.1.27\AVRToolchain\bin\avr-size.exe" -C --mcu=atmega32  "exp 7 2 a.elf"
	




# Other Targets
clean:
	-$(RM) $(OBJS_AS_ARGS)$(C_DEPS_AS_ARGS) $(EXECUTABLES) 
	rm -rf "exp 7 2 a.hex" "exp 7 2 a.lss" "exp 7 2 a.eep" "exp 7 2 a.map"
	