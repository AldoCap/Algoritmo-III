::Compilo las librerías
g++ -Wall -std=c++11 -I.\include\ -c .\src\client.cpp
g++ -Wall -std=c++11 -I.\include\ -c .\src\clientHandler.cpp
g++ -Wall -std=c++11 -I.\include\ -c .\src\chatCommunication.cpp
g++ -Wall -std=c++11 -I.\include\ -c .\src\emailcommunication.cpp
g++ -Wall -std=c++11 -I.\include\ -c .\src\ticket.cpp
g++ -Wall -std=c++11 -I.\include\ -c .\src\ticketHandler.cpp
g++ -Wall -std=c++11 -I.\include\ -c .\src\telephoneRepresentative.cpp
g++ -Wall -std=c++11 -I.\include\ -c .\src\telephoneRepresentativeHandler.cpp
g++ -Wall -std=c++11 -I.\include\ -c .\src\uuid.cpp
g++ -Wall -std=c++11 -I.\include\ -c .\src\incident.cpp
g++ -Wall -std=c++11 -I.\include\ -c .\src\grafo.cpp
g++ -Wall -std=c++11 -I.\include\ -c main.cpp

:: Compilo el Binario
g++ chatCommunication.o emailcommunication.o grafo.o uuid.o incident.o client.o clientHandler.o ticket.o ticketHandler.o telephoneRepresentative.o telephoneRepresentativeHandler.o main.o -o app.exe

::Borrar .o
DEL .\*.o

::Ejecuto el binario:
app.exe