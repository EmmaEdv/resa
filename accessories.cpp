#include <iostream>
using namespace std;

int main(){
	String accessories[] = {
		"pass",
		"flygbiljetter",
		"pengar i rätt valuta",s
		"ficklampa",
		"sovsäck",
		"badlakan",
		"solglasögon",
		"dykcert",
		"cyklop",
		"adress till mormor"		
	};

	for(int i = 0; i < accessories.size(); i++){
		cout << "Packa ned " << accessories[i] << " i resväskan";
	}
}