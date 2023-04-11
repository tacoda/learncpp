hello-world:
	g++ -o HelloWorld HelloWorld.cpp
	./HelloWorld
	rm HelloWorld

comments:
	g++ -o Comments Comments.cpp
	./Comments
	rm Comments

variable-assignment:
	g++ -o VariableAssignment VariableAssignment.cpp
	./VariableAssignment
	rm VariableAssignment

io-stream:
	g++ -o IoStream IoStream.cpp
	./IoStream
	rm IoStream

naming:
	g++ -o Naming Naming.cpp
	./Naming
	rm Naming
