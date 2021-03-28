LIB_TARGET_PATH = ./lib
INC_TARGET_PATH = ./include

INCLUES = $(wildcard *.h)
SOURCES = $(wildcard *.cpp)
OBJECTS = $(SOURCES:.cpp=.o)

TARGET  = libutil.a

$(TARGET): $(OBJECTS)
	@ar -crv $@ $^
	@mkdir -p $(INC_TARGET_PATH)
	@mkdir -p $(LIB_TARGET_PATH)
	@cp $(INCLUES) $(INC_TARGET_PATH)/
	@cp $(TARGET) $(LIB_TARGET_PATH)/

$(OBJECTS): %.o : %.cpp
	@$(CXX) $< $(CPPFLAGS) $(CXXFLAGS) -c -o $@

clean:
	@rm -rf $(TARGET) $(OBJECTS)

.PHONY: clean
