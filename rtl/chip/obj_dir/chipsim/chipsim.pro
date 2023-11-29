QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

INCLUDEPATH += \
    . \
    /usr/local/share/verilator/include \
    /usr/local/share/verilator/include/vltstd \
    /usr/include/graphviz \
    /usr/local/include/unicorn \
    ../

DEFINES += \
    VM_COVERAGE=0 \
    VM_SC=0 \
    VM_TRACE=1 \
    VM_TRACE_FST=0 \
    VM_TRACE_VCD=1

QMAKE_CXXFLAGS += \
    -faligned-new \
    -fcf-protection=none \
    -Wno-bool-operation \
    -Wno-sign-compare \
    -Wno-uninitialized \
    -Wno-unused-but-set-variable \
    -Wno-unused-parameter \
    -Wno-unused-variable \
    -Wno-shadow \
    -fcoroutines \
    -Os

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp

RESOURCES += \
    modules/QDarkStyleSheet/qdarkstyle/dark/darkstyle.qrc

OBJECTS += \
    ../verilated.o \
    ../verilated_threads.o \
    ../verilated_timing.o \
    ../verilated_vcd_c.o

LIBS += -L../ -l:Vchip_tb__ALL.a -pthread -lpthread -latomic
LIBS += -lgmpxx -lgmp -lcapstone
LIBS += -lgvc -lcgraph -lunicorn

HEADERS += \
    rtl_headers.h
im
FORMS +=

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
