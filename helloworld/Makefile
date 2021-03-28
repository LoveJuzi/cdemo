TARGET_PATH       = ./bin
CDEMO_ROOT_PATH   = ..
UTIL_PATH         = $(CDEMO_ROOT_PATH)/util

SOURCES = $(wildcard *.cpp)
OBJECTS = $(SOURCES:.cpp=.o)
TARGET  = hello

CXXFLAGS += -I$(UTIL_PATH)/include 
LDFLAGS  += -L$(UTIL_PATH)/lib -lutil

all: preference $(TARGET)

preference:
	@make -C $(UTIL_PATH)

$(TARGET): $(OBJECTS)
	@$(CXX) $^ $(LDFLAGS) -o $@
	@mkdir -p $(TARGET_PATH)
	@cp -r $(TARGET) $(TARGET_PATH)

$(OBJECTS): %.o: %.cpp
	@$(CXX) $< $(CPPFLAGS) $(CXXFLAGS) -c -o $@

clean:
	@rm -rf $(TARGET) $(OBJECTS)

.PHONY: all preference clean

