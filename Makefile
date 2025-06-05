# Compilador e flags
CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17 -fprofile-arcs -ftest-coverage
LDFLAGS = -lgcov

# Nome dos arquivos
TARGET = testa_velha
SRC = velha.cpp testa_velha.cpp
OBJ = $(SRC:.cpp=.o)

# Regra padrão
all: $(TARGET)

# Linkagem final
$(TARGET): $(OBJ)
	$(CXX) $(OBJ) -o $@ $(LDFLAGS)

# Compilação dos arquivos .cpp
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Geração da cobertura de código
coverage: $(TARGET)
	./$(TARGET)
	gcov velha.cpp

# Análise estática com cppcheck
cppcheck:
	cppcheck --enable=warning .

# Limpeza dos arquivos gerados
clean:
	rm -f *.o $(TARGET) *.gcno *.gcda *.gcov

.PHONY: all clean coverage cppcheck
