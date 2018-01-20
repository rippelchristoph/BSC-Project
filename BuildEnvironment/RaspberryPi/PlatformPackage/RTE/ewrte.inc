
EMWI_RTE_LIB = ewrte

ifeq ($(MEMORY_USAGE),1)
  EMWI_RTE_LIB := $(EMWI_RTE_LIB)-mu
endif

EMWI_RTE_FILES :=                                                              \

