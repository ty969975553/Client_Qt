
CONFIG(debug, debug|release) {   
    DESTDIR = ../bin/debug  
    OBJECTS_DIR = ./debug  
}  
else {   
    DESTDIR = ../bin/release  
    OBJECTS_DIR = ./release  
}