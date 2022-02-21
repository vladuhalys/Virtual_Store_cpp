#include "../../Users/Client/Client.h"
#include "../../Models/CRAD/CRAD.h"
#include "../../Models/Validation/Validation.h"
#include "../../../Ui/ColorDialog/ColorDialog.h"

#ifndef _client_provider_h
#define _client_provider_h

class ClientProvider : public CRAD
{
private:
	vector<Client*> clients;

	//private Function
	string CreatePersonalInfo(string text, InfoType info);
	string CheckInputLogin(string text);
	bool InputStatus();
public:
	//Constructor
	ClientProvider() = default;
	ClientProvider(vector<Client*> employees);

	//CRAD override
	void Create() override;
	/*void Remove() override;
	void Add() override;
	void Delete() override;*/



	//Destructor
	~ClientProvider();


};

#endif
