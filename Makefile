# Compilateur
CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -I./ -Icomponents -Iservices -IIhm

# Dossiers
SRC_DIRS = . components services Ihm
SRC = $(foreach dir, $(SRC_DIRS), $(wildcard $(dir)/*.cpp))

# Fichiers objets
OBJ = $(SRC:.cpp=.o)

# Librairies SFML
SFML = -lsfml-graphics -lsfml-window -lsfml-system

# Nom de l'exécutable
TARGET = app

# Règle par défaut
all: $(TARGET)

# Compilation de l'exécutable
$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^ $(SFML)

# Compilation des .o
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Nettoyage
clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(TARGET)

re: fclean all
