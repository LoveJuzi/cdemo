TARGET_PATH = ./bin
ROO_PATH    = ..

SOURCES = $(wildcard *.cpp)
OBJECTS = $(SOURCES:.cpp=.o)
TARGET  = hello

CXXFLAGS += -I$(ROO_PATH)/util/include 
LDFLAGS  += -L$(ROO_PATH)/util/lib -lutil

$(TARGET): $(OBJECTS)
	@$(CXX) $^ $(LDFLAGS) -o $@
	@mkdir -p $(TARGET_PATH)
	@cp -r $(TARGET) $(TARGET_PATH)

$(OBJECTS): %.o: %.cpp
	@$(CXX) $< $(CPPFLAGS) $(CXXFLAGS) -c -o $@

clean:
	@rm -rf $(TARGET) $(OBJECTS)
