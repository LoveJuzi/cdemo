TARGET  := app.exe
SOURCES := $(wildcard *.cpp)
OBJECTS := $(SOURCES:.cpp=.o) 

CXXFLAGS += -std=c++11 -fPIC
LDFLAGS  += -lrt -lm -lpthread

$(TARGET):$(OBJECTS)
	@$(CXX) $(LDFLAGS) $^ -o $@

$(OBJECTS):%.o:%.cpp
	@$(CXX) -c $< $(CPPFLAGS) $(CXXFLAGS) -o $@

clean:
	@$(RM) $(TARGET) $(OBJECTS)

.Phony: clean
