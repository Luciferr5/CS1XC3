BUILD_DIR = build


$(shell mkdir -p $(BUILD_DIR))

DOCUMENTATION_DIR = documentation/docs

$(shell mkdir -p $(DOCUMENTATION_DIR))

$(DOCUMENTATION_DIR):
	mkdir -p $(DOCUMENTATION_DIR)


student.o: src/student.c 
	gcc -c src/student.c -o $(BUILD_DIR)/$@ 

course.o: src/course.c
	gcc -c src/course.c -o $(BUILD_DIR)/$@

Doxyfile:
	doxygen -g

.PHONY: docs
docs: Doxyfile
	doxygen Doxyfile 


main:  $(DOCUMENTATION_DIR) student.o course.o src/main.c docs
	gcc src/main.c $(BUILD_DIR)/student.o $(BUILD_DIR)/course.o -o $(BUILD_DIR)/main



.PHONY: clean
clean:
	rm -rf $(BUILD_DIR)

.DEFAULT_GOAL := main

