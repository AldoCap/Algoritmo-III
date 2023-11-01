#include "./include/category.hpp"
#include "./include/activityLog.hpp"
#include "./include/communication.hpp"
#include "./include/ticket.hpp"
#include "./include/uuid.hpp"
#include "./include/client.hpp"
#include <iostream>
#include <ticketHandler.hpp>
#include <telephoneRepresentative.hpp>
#include <telephoneRepresentativeHandler.hpp>
#include <map>

void showMenu(); 
void createTicket(string priority,string description); 
void updateTicket(); 
void closeTicket(); 
void viewStateTicket(); 

int main() {
    
    showMenu();
    return 0;
}

void showMenu()
{
    int choice;
    string id = "1",idclient = "10",idrepresentative = "100",
                priority = "high",description = "este es un error del dia"; 
    do{
        

        std::cout << "Menú Principal Ticket" << std::endl;
        std::cout << "1. Creacion Ticket" << std::endl;
        std::cout << "2. Actualizar Ticket" << std::endl;
        std::cout << "3. Cerrar Ticket" << std::endl;
        std::cout << "4. Ver estado Ticket" << std::endl;
        std::cout << "0. Salir" << std::endl;
        std::cout << "Elija una opción: ";
        std::cin >> choice;

        switch (choice) 
        {
            case 0:
                break;
            case 1:
                std::cout << "Ha seleccionado la Opción 1." << std::endl;
    
                    createTicket(priority,description); 

                break;
            case 2:
                std::cout << "Ha seleccionado la Opción 2." << std::endl;
                updateTicket(); 

                break;
            case 3:
                std::cout << "Ha seleccionado la Opción 3." << std::endl;
                closeTicket(); 

                break;
            case 4:
                std::cout << "Ha seleccionado la Opción 4." << std::endl;
                viewStateTicket(); 
                break;
            case 5:
                std::cout << "Saliendo del programa." << std::endl;
                break;
        }
    } while (choice != 0);
}

void createTicket(string priority,string description)
{
    ClientHandler* clientHandler = new ClientHandler();
    TelephoneRepresentativeHandler* telRepre = new TelephoneRepresentativeHandler();

    map<string, string> clientData;
    clientData["name"] = "Aldo";
    clientData["surname"] = "Capurro";
    clientData["email"] = "Capurro@aldo.com";

    map<string, string> telRepreData;
    telRepreData["name"] = "Bet";
    telRepreData["surname"] = "Villanueva";

    string clientID = clientHandler->createClient(clientData);
    string telRepreID= telRepre->create(telRepreData);

    clientHandler->readData(clientID);
    telRepre->readData(telRepreID);

    TicketHandler* ticketHandler = new TicketHandler();
    ticketHandler->createTicket(telRepreID,clientID,priority,description);
} 
void updateTicket()
{

} 
void closeTicket()
{

}
void viewStateTicket()
{

}