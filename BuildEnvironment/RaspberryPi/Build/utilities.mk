###############################################################################
# Substitutions for common used utilities and programs, exported to be valid
# for all sub-make files.
###############################################################################


CROSS    := 
CC       := $(CROSS)gcc
CXX      := $(CROSS)g++
STRIP    := $(CROSS)strip
LD       := $(CROSS)gcc
OBJCOPY  := $(CROSS)objcopy
AR       := $(CROSS)ar
SIZE     := $(CROSS)size -A

RM    := rm -f
RMDIR := rm -rf
MKDIR := mkdir -p

# Some usefull variables for string manipulation.
COMMA:= ,
EMPTY:=
SPACE:= $(EMPTY) $(EMPTY)
COLON:=:
QUOTE:=\"

# line feed definition used in error messages
define n


endef
