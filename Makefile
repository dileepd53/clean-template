all:
	g++ -Wall -Wextra -o vehicle-collector-test *.cpp -lgtest -lpthread -fprofile-arcs -ftest-coverage -fPIC -O0
