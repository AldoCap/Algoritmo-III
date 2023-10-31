::Compilo las librerías
g++ -Wall -std=c++11 -I.\include\ -c .\src\client.cpp
g++ -Wall -std=c++11 -I.\include\ -c .\src\clientHandler.cpp
g++ -Wall -std=c++11 -I.\include\ -c .\src\ticket.cpp
g++ -Wall -std=c++11 -I.\include\ -c .\src\ticketHandler.cpp
g++ -Wall -std=c++11 -I.\include\ -c main.cpp

:: Compilo el Binario
g++ client.o clientHandler.o ticket.o ticketHandler.o main.o -o app.exe

::Borrar .o
DEL .\*.o

::Ejecuto el binario:
app.exe