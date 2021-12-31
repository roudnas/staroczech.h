#include "../staroczech.h"
#include <stdio.h>

číslo dníVRoce ( číslo rok ) začětie
	vrátiti 365;	
končenie

číslo PF ( číslo deň, číslo rok ) začětie 
	
	číslo dní_rok roveň dníVRoce ( rok );
	
	kdyžť ( deň rovnati dní_rok ) začětie
		potískatif( "Sčastné nové léto!\n" );
		vrátiti 1;
	končenie;
	
	vrátiti 0;
	
končenie

číslo najpřědní(prázdn) začětie 

	PF ( 365, 2021 );
	vrátiti 0;

končenie

