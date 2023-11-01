#include <telephoneRepresentativeHandler.hpp>

using namespace std;

TelephoneRepresentativeHandler::TelephoneRepresentativeHandler()
{

}

string TelephoneRepresentativeHandler::create(map<string, string> telRepreData)
{
    TelephoneRepresentative* telRepre = new TelephoneRepresentative( this->uuid->createUuid(),telRepreData["name"],telRepreData["surname"]);

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
            cout << "\nuuid erroneo"<<endl;
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
            cout << "\nuuid erroneo"<<endl;
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