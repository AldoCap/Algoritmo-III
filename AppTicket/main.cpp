#include "./include/category.hpp"
#include "./include/activityLog.hpp"
#include "./include/communication.hpp"
#include "./include/telephoneRepresentative.hpp"
#include "./include/ticket.hpp"
#include "./include/uuid.hpp"
#include "./include/client.hpp"
#include <iostream>
#include <ticketHandler.hpp>

void showMenu(); 
void createTicket(string ticketID,string representativeID, string clientID,string priority,string description); 
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
    
                    createTicket(id,idclient,idrepresentative,priority,description); 

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

void createTicket(string ticketID,string representativeID, string clientID,string priority,string description)
{
    TicketHandler* ticketHandler = new TicketHandler();
    ticketHandler->createTicket(ticketID,representativeID,clientID,priority,description);
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