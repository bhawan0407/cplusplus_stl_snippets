CXX = g++ --std=c++11
CXXFLAGS = -Wall -Werror

# $< represents dependency
# $@ represents target

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $<

templates: templates.o
	$(CXX) $(CXXFLAGS) -o $@ $<

lists: lists.o
	$(CXX) $(CXXFLAGS) -o $@ $<

vectors: vectors.o
	$(CXX) $(CXXFLAGS) -o $@ $<

deques: deques.o
	$(CXX) $(CXXFLAGS) -o $@ $<

stacks: stacks.o
	$(CXX) $(CXXFLAGS) -o $@ $<

queues: queues.o
	$(CXX) $(CXXFLAGS) -o $@ $<

priority_queues: priority_queues.o
	$(CXX) $(CXXFLAGS) -o $@ $<

sets: sets.o
	$(CXX) $(CXXFLAGS) -o $@ $<

clean:
	rm *.o