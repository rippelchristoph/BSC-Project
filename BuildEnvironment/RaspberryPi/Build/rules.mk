###############################################################################
# Standard rules.
###############################################################################


CCRUN_STD  = $(CC)  -c $(CFLAGS) $(INCLUDES) $(DEFINES) -o $@ $<
CPPRUN_STD = $(CPP) -c $(CFLAGS) $(INCLUDES) $(DEFINES) -o $@ $< -D__cplusplus
CCRUN_DEP  = $(CC) -M -MG $(CFLAGS) $(INCLUDES) $(DEFINES) $< | \
              sed -e 's@^.*\.o:@$(EMPTY)$*.o $(strip $(@:.o=.d)) : \
              @g' -e 's@\\\([^$$]\)@/\1@g' > $(strip $(@:.o=.d))



$(OBJ_PATH)/%.o: %.c $(wildcard Makefile*)
	@echo Compiling $<
#	@echo $(CCRUN_STD)
	$(CCRUN_STD)

$(OBJ_PATH)/%.o: %.cpp $(wildcard Makefile*)
	@echo Compiling $<
#	@echo $(CPPRUN_STD)
	$(CPPRUN_STD)

$(OBJ_PATH)/%.d: %.c
	@echo Creating dependancy for $<
	$(CCRUN_DEP)
