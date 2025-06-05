# Compilador
CXX = g++
# Flags de compilação
CXXFLAGS = -Wall -Wextra -std=c++11

# Nome do executável
TARGET = testa_velha

# Arquivos objeto
OBJS = velha.o testa_velha.o

# Regra padrão: compilar e linkar
all: $(TARGET)

# Linka os objetos para gerar o executável
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Compila velha.cpp em velha.o
velha.o: velha.cpp velha.h
	$(CXX) $(CXXFLAGS) -c velha.cpp

# Compila testa_velha.cpp em testa_velha.o
testa_velha.o: testa_velha.cpp velha.h
	$(CXX) $(CXXFLAGS) -c testa_velha.cpp

# Limpa arquivos compilados
clean:
	rm -f $(OBJS) $(TARGET)
