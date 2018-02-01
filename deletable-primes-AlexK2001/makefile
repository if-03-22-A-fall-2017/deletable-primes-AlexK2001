CC					= g++
CCLINK			= g++
LIBS				=
CCOPTIONS		= -Wall -pedantic -g
LDOPTIONS		=
HDRS				= deletable_primes.h test_deletable_primes.h general.h shortcut.h

TEST = test_deletable_primes
PROGRAM =

TESTOBJECT = deletable_primes_test_driver.o
MAINOBJECT =
OBJS = shortcut.o deletable_primes.o test_deletable_primes.o

DOXY            = /Applications/Doxygen/Doxygen.app/Contents/Resources/doxygen

all: $(PROGRAM)
	./$(PROGRAM)

$(TEST): $(OBJS) $(TESTOBJECT)
	$(CCLINK) -o $@ $(LDOPTIONS) $(OBJS) $(TESTOBJECT)

$(PROGRAM): $(OBJS) $(MAINOBJECT)
	$(CCLINK) -o $@ $(LDOPTIONS) $(OBJS) $(MAINOBJECT)

.PHONY: clean cleanall doxy test setsample setassignment definesample defineassignment assignmentfolder

clean:
	rm -f $(PROGRAM) $(TEST) $(TESTOBJECT) $(MAINOBJECT) $(OBJS)

cleanall:
	rm -f $(PROGRAM) $(TEST) $(TESTOBJECT) $(MAINOBJECT) $(OBJS) index.html
	rm -R html

doxy:
	$(DOXY)
	ln -s html/index.html index.html

test: $(TEST)
	./$(TEST)

#sets project as sample solution
setsample:
	cp deletable_primes.cpp.sample deletable_primes.cpp
	cp deletable_primes.h.sample deletable_primes.h

#sets project as assignment
setassignment:
	cp deletable_primes.cpp.assignment deletable_primes.cpp
	cp deletable_primes.h.assignment deletable_primes.h

# defines current state of project as sample solution
definesample:
	cp deletable_primes.cpp deletable_primes.cpp.sample
	cp deletable_primes.h deletable_primes.h.sample

# defines current sate of project as assignment
defineassignment:
	cp deletable_primes.cpp deletable_primes.cpp.assignment
	cp deletable_primes.h deletable_primes.h.assignment

# creates a folder which can serve as a publishable assignment
assignmentfolder:
	make setsample
	make doxy
	make setassignment
	mkdir ../assignment
	cp -R * ../assignment
	rm ../assignment/*.sample
	rm ../assignment/*.assignment
	make cleanall

%.o: %.cpp $(HDRS)
	$(CC) $(CCOPTIONS) -c $<
