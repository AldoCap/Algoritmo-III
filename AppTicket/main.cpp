#include <iostream>
#include <map>
#include "./include/category.hpp"
#include "./include/activityLog.hpp"
#include "./include/communication.hpp"
#include "./include/ticket.hpp"
#include "./include/uuid.hpp"
#include "./include/client.hpp"
#include "./include/ticketHandler.hpp"
#include  "./include/telephoneRepresentative.hpp"
#include  "./include/telephoneRepresentativeHandler.hpp"
#include <grafo.hpp>


void showMenu(); 
void createTicket(string priority,string description); 
void updateTicket(); 
void closeTicket(); 
void viewStateTicket(); 
void communication(); 

string clientID, clientID2, clientID3, clientID4, clientID5; 
string ticketID, ticketID2, ticketID3, ticketID4, ticketID5; 
Graph* graph = new Graph();
ClientHandler* clientHandler = new ClientHandler();
TelephoneRepresentativeHandler* telRepre = new TelephoneRepresentativeHandler();
TicketHandler* ticketHandler = new TicketHandler();
Ticket* ticket = new Ticket();
int main() 
{
    ticketHandler->setGrafo(graph);

    showMenu();

    delete clientHandler; 
    delete telRepre; 
    delete ticketHandler; 
    delete ticket; 

    return 0;
}

void showMenu()
{
    int choice;
    string id = "1",idclient = "10",idrepresentative = "100",
                priority = "high",description = "este es un error del dia"; 
    do{
        

        std::cout << "Menu Principal Ticket" << std::endl;
        std::cout << "1. Creacion Ticket" << std::endl;
        std::cout << "2. Actualizar Ticket" << std::endl;
        std::cout << "3. Cerrar Ticket" << std::endl;
        std::cout << "4. Ver estado Ticket" << std::endl;
        std::cout << "5. Communication" << std::endl;
        std::cout << "0. Salir" << std::endl;
        std::cout << "Elija una opcion: ";
        std::cin >> choice;

        switch (choice) 
        {
            case 1:
                std::cout << "Ha seleccionado la Opcion 1." << std::endl;
                    createTicket(priority,description);

                break;
            case 2:
                std::cout << "Ha seleccionado la Opcion 2." << std::endl;
                updateTicket(); 

                break;
            case 3:
                std::cout << "Ha seleccionado la Opcion 3." << std::endl;
                closeTicket(); 

                break;
            case 4:
                std::cout << "Ha seleccionado la Opcion 4." << std::endl;
                viewStateTicket(); 
                break;
            case 5:
                std::cout << "Ha seleccionado la Opcion 4." << std::endl;
                viewStateTicket(); 
                break;
            case 0:
                std::cout << "Saliendo del programa." << std::endl;
                break;
        }
    } while (choice != 0);
}

void createTicket(string priority,string description)
{
    map<string, string> clientData;
    clientData["name"] = "Aldo";
    clientData["surname"] = "Capurro";
    clientData["email"] = "AldoCapurro@aldo.com";
    clientData["address"] = "Colon 6000";

    map<string, string> telRepreData;
    telRepreData["name"] = "Bet";
    telRepreData["surname"] = "Villanueva";

    map<string, string> clientData2;
    clientData2["name"] = "Pedro";
    clientData2["surname"] = "Capurro";
    clientData2["email"] = "PedroCapurro@aldo.com";
    clientData2["address"] = "San Juan 234";

    map<string, string> clientData3;
    clientData3["name"] = "Maria";
    clientData3["surname"] = "Capurro";
    clientData3["email"] = "MariaCapurro@aldo.com";
    clientData3["address"] = "Maipu 121";


    map<string, string> clientData4;
    clientData4["name"] = "Joaquin";
    clientData4["surname"] = "Capurro";
    clientData4["email"] = "JoaquinCapurro@aldo.com";
    clientData4["address"] = "Mendoza 321";

    map<string, string> clientData5;
    clientData5["name"] = "Juan";
    clientData5["surname"] = "Capurro";
    clientData5["email"] = "JuanCapurro@aldo.com";
    clientData5["address"] = "Luro 87";

    clientID = clientHandler->createClient(clientData);
    clientID2 = clientHandler->createClient(clientData2);
    clientID3 = clientHandler->createClient(clientData3);
    clientID4 = clientHandler->createClient(clientData4);
    clientID5 = clientHandler->createClient(clientData5);

    string telRepreID= telRepre->create(telRepreData);

    clientHandler->readData(clientID);
    clientHandler->readData(clientID2);

    telRepre->readData(telRepreID);

    ticketID = ticketHandler->createTicket(telRepreID,clientID,priority,description);
    ticketID2 = ticketHandler->createTicket(telRepreID,clientID2,priority,description);
    ticketID3 = ticketHandler->createTicket(telRepreID,clientID3,priority,description);
    ticketID4 = ticketHandler->createTicket(telRepreID,clientID4,priority,description);
    ticketID5 = ticketHandler->createTicket(telRepreID,clientID5,priority,description);

    ticketHandler->calculateShortestPath();

} 
void updateTicket()
{   
    ticketHandler->updateStatus(ticketID,"En tratamiento");

    ticketHandler->viewTicket(ticketID);
} 
void closeTicket()
{
    ticketHandler->closeTicket(ticketID); 
    ticketHandler->viewTicket(ticketID);

}
void viewStateTicket()
{
    ticketHandler->viewTicket(ticketID);
}
void communication()
{
    ticketHandler->sendNotification("2235");  
}
