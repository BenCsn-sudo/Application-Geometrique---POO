# Compilateur
CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -I./ -IComponents -IService -IIhm

# Dossiers (attention à la casse)
SRC_DIRS = . Components Service Ihm
SRC = $(foreach dir, $(SRC_DIRS), $(wildcard $(dir)/*.cpp))

# Fichiers objets
OBJ = $(SRC:.cpp=.o)

# Librairies SFML
SFML = -lsfml-graphics -lsfml-window -lsfml-system

# Nom de l'exécutable
TARGET = app

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^ $(SFML)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(TARGET)

re: fclean all
