TAGET := qt03

# include paths
QT_INC   := "-isystem" "$(QT_INC_DIR)/QtCore"    \
	        "-isystem" "$(QT_INC_DIR)/QtGui"     \
			"-isystem" "$(QT_INC_DIR)/QtSvg"     \
			"-isystem" "$(QT_INC_DIR)/QtUiTools" \
			"-isystem" "$(QT_INC_DIR)/QtXml"     \
			"-isystem" "$(QT_INC_DIR)/QtWidgets" \
			"-isystem" "$(QT_INC_DIR)"

# libs
QT_LIB   :=  "-L$(QT_LIB_DIR)"          \
	         "-lQt5Core" "-lQt5Gui"     \
			 "-lQt5Svg" "-lQt5UiTools"  \
			 "-lQt5Xml" "-lQt5Widgets"
LIBFLAG  := "-lrt" "-lm" "-lpthread" $(QT_LIB)

# config CXXFLAGS
CXXFLAGS        := "-I." $(QT_INC) $(LIBFLAG) "-fPIC"

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
	@$(CXX) $(LIBFLAG) $(OBJECTS) -o $@

$(OBJECTS):%.o:%.cpp
	@$(CXX) -c $< $(CXXFLAGS) -o $@


.PHONY: clean

clean:
	rm -rf $(TAGET) $(OBJECTS) $(MOC_SOURCES)

