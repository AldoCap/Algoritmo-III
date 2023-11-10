#include <telephoneRepresentativeHandler.hpp>

using namespace std;

TelephoneRepresentativeHandler::TelephoneRepresentativeHandler()
{

}

string TelephoneRepresentativeHandler::create(map<string, string> telRepreData)
{
    TelephoneRepresentative* telRepre = new TelephoneRepresentative( UuId::generateUuid(),telRepreData["name"],telRepreData["surname"]);

    this->telRepreStorage.push_back(telRepre);
    
    return telRepre->getID();
} 
void TelephoneRepresentativeHandler::update(map<string, string> telRepreData,string telRepreID)
{
    for (TelephoneRepresentative* telRepre : this->telRepreStorage) 
    {
        if(telRepre->getID() == telRepreID)
        {
            telRepre->setName(telRepreData["name"]);
            telRepre->setSurname(telRepreData["surname"]);
        }
        else
        {
            cout << "\nuuid erroneo: No se pudo actualizae representante"<<endl;
        }
    }
}

void TelephoneRepresentativeHandler::readData(string telRepreID)
{
    for (TelephoneRepresentative* telRepre : this->telRepreStorage) 
    {
        if(telRepre->getID() == telRepreID)
        {
            cout << "\nTel repre name: " << telRepre->getName()<<endl;
            cout << "\nTel repre surname: " << telRepre->getSurname()<<endl;
        }
        else
        {
            cout << "\nuuid erroneo: No se pudo ver representante"<<endl;
        }
    }
}
        
string TelephoneRepresentativeHandler::deletetelRepre(string)
{
    return this->data; 
}

TelephoneRepresentativeHandler::~TelephoneRepresentativeHandler()
{

} 