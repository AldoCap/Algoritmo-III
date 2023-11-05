#include <iostream>
#include <map>
#include "./include/category.hpp"
#include "./include/activityLog.hpp"
//#include "./include/communication.hpp"
#include "./include/ticket.hpp"
#include "./include/uuid.hpp"
#include "./include/client.hpp"
#include "./include/ticketHandler.hpp"
#include  "./include/telephoneRepresentative.hpp"
#include  "./include/telephoneRepresentativeHandler.hpp"


void showMenu(); 
void createTicket(string priority,string description); 
void updateTicket(); 
void closeTicket(); 
void viewStateTicket(); 
void communication(); 

string clientID; 
ClientHandler* clientHandler = new ClientHandler();
TelephoneRepresentativeHandler* telRepre = new TelephoneRepresentativeHandler();
TicketHandler* ticketHandler = new TicketHandler();
Ticket* ticket = new Ticket();

int main() {
    
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
    clientData["email"] = "Capurro@aldo.com";

    map<string, string> telRepreData;
    telRepreData["name"] = "Bet";
    telRepreData["surname"] = "Villanueva";

    clientID = clientHandler->createClient(clientData);
    string telRepreID= telRepre->create(telRepreData);

    clientHandler->readData(clientID);
    telRepre->readData(telRepreID);

    ticketHandler->createTicket(telRepreID,clientID,priority,description);
} 
void updateTicket()
{
    ticket->setState("En tratamiento");
} 
void closeTicket()
{
    ticket->closeTicket("2235"); 
}
void viewStateTicket()
{
  cout << ticket->getState() << endl;  
}
void communication()
{
    ticketHandler->sendNotification("2235");  
}