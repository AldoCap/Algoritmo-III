#include "./include/category.hpp"
#include "./include/activityLog.hpp"
#include "./include/communication.hpp"
#include "./include/telephoneRepresentative.hpp"
#include "./include/ticket.hpp"
#include "./include/uuid.hpp"
#include "./include/client.hpp"
#include <iostream>

void showMenu(); 
void createTicket(); 
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

    do {
        
        std::cout << "Menú Principal Ticket" << std::endl;
        std::cout << "1. Creacion Ticket" << std::endl;
        std::cout << "2. Actualizar Ticket" << std::endl;
        std::cout << "3. Cerrar Ticket" << std::endl;
        std::cout << "4. Ver estado Ticket" << std::endl;
        std::cout << "0. Salir" << std::endl;
        std::cout << "Elija una opción: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::cout << "Ha seleccionado la Opción 1." << std::endl;
                void createTicket(); 

                break;
            case 2:
                std::cout << "Ha seleccionado la Opción 2." << std::endl;
                void updateTicket(); 

                break;
            case 3:
                std::cout << "Ha seleccionado la Opción 3." << std::endl;
                void closeTicket(); 

                break;
            case 4:
                std::cout << "Ha seleccionado la Opción 4." << std::endl;
                void viewStateTicket(); 
                break;
            case 0:
                std::cout << "Saliendo del programa." << std::endl;
                break;
            default:
                std::cout << "Opción no válida. Inténtelo de nuevo." << std::endl;
                break;
        }
    } while (choice != 0);
}

void createTicket()
{

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