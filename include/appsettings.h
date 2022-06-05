#ifndef APPSETTINGS_H
#define APPSETTINGS_H

#include <iostream>
#include <string>

#include "scriptini.h"
#include "bytestream.h"
#include "wregistry.h"
#include "stringext.h"
#include "wstringext.h"
#include "stringenc.h"


struct ini_names {
	std::string esl_path;
	std::string esl_path_desc;
	std::string esl;
	std::string esl_desc;
	std::string seq;
	std::string seq_desc;
	ini_names () ;
	};

class appsettings {
public:
	double degree_to_radian;
	double radian_to_degree;
	double meters_to_milli;
	double milli_to_meters;
	double centi_to_milli;
	double milli_to_centi;
	double eslrot_to_degree;
	double degree_to_eslrot;
	std::wstring bio_path;

	ini_names label;

	appsettings();
	virtual ~appsettings();

	/** Accesses the registry to get the steam install folder */
	std::wstring steamInstallPathW ();

	std::wstring getBio4InstallPathW ();



	void save_settings ();
	void read_settings ();

//	std::wstring steamPath = getBio4InstallPathW();
//	if (steamPath != L"" && win::doesFileExistW(steamPath)) {
//		std::wcout << L"steamPath: \t" << steamPath << std::endl;
//		}




protected:

private:

	};

extern appsettings* app;




#endif // APPSETTINGS_H
