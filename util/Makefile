LIB_TARGET_PATH = ./lib
INC_TARGET_PATH = ./include

INCLUES = $(wildcard *.h)
SOURCES = $(wildcard *.cpp)
OBJECTS = $(SOURCES:.cpp=.o)

TARGET  = libutil.a

$(TARGET): $(OBJECTS)
	@ar -crv $@ $(OBJECTS)
	@mkdir -p $(INC_TARGET_PATH)
	@mkdir -p $(LIB_TARGET_PATH)
	@echo $(INCLUES)
	@cp $(INCLUES) $(INC_TARGET_PATH)/
	@cp $(TARGET) $(LIB_TARGET_PATH)/

$(OBJECTS): %.o : %.cpp
	@$(CXX) -c $< -o $@

clean:
	@rm -rf $(TARGET) $(OBJECTS) $(LIB_TARGET_PATH) $(INC_TARGET_PATH)

.PHONY: clean
