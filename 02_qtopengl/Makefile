TAGET := qtopengl

QT_INC := -I$(QT_INC_DIR)/QtCore -I$(QT_INC_DIR)/QtGui -I$(QT_INC_DIR)/QtSvg -I$(QT_INC_DIR)/QtUiTools -I$(QT_INC_DIR)/QtXml -I$(QT_INC_DIR)/QtWidgets -I$(QT_INC_DIR)

QT_LIB :=  -L$(QT_LIB_DIR) -lQt5Core -lQt5Gui -lQt5Svg -lQt5UiTools -lQt5Xml -lQt5Widgets

CXXFLAGS += -fPIC -std=c++11 $(QT_INC)
LDFLAGS  += -lrt -lm -lpthread $(QT_LIB)

MOC_HEADERS     := $(shell find . -type f | grep \.qt\.h$$)
MOC_SOURCES     := $(MOC_HEADERS:.qt.h=.moc.cpp)
GEN_MOC_SOURCES := $(foreach vh, $(MOC_HEADERS), $(shell \
                        vd=`echo $(vh) | sed 's/.qt.h/.moc.cpp/'`; \
                        if test $(vh) -nt $$vd; then \
                            moc $(vh) -o $$vd; \
                        fi))
SOURCES         := $(shell find . -type f | grep \.cpp$$)
OBJECTS         := $(SOURCES:.cpp=.o) 

$(TAGET): $(OBJECTS)
	@$(CXX) $(LDFLAGS) $^ -o $@

$(OBJECTS):%.o:%.cpp
	@$(CXX) $(CPPFLAGS) $(CXXFLAGS) -c $< -o $@


.PHONY: clean

clean:
	@$(RM) $(TAGET) $(OBJECTS) $(MOC_SOURCES)

