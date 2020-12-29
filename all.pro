TEMPLATE = subdirs
 
SUBDIRS += framelesswindow \
           darkstyle \
           text\

framelesswindow.subdir = framelesswindow
darkstyle.subdir = darkstyle
text.subdir = text

CONFIG += ordered

text.depends = darkstyle framelesswindow
