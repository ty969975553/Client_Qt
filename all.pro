TEMPLATE = subdirs
 
SUBDIRS += darkstyle \
           text\

darkstyle.subdir = darkstyle
text.subdir = text

CONFIG += ordered

text.depends = darkstyle
