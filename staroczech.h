/* 
* Basically mapping czech.h to Old Czech.
* Go visit: https://github.com/Toaster192/czech.h
*
*/

// Data types
#define SOUBOR FILE
#define plavati float
#define dvojduchý double
#define číslo int
#define karakter char
#define kar char
#define podlúhovatý long
#define kracšie short
#define kracši short
#define znaménce signed
#define bezznaménce unsigned
#define prázdn void
#define prostrano void
#define spravedlenstvie bool
#define pravdivost bool

// Advanced data types 
#define velikost_t size_t
#define množnost_t size_t
#define číslo8_t int8_t
#define číslo16_t int16_t
#define číslo32_t int32_t
#define číslo64_t int64_t
#define nčíslo8_t uint8_t
#define nčíslo16_t uint16_t
#define nčíslo32_t uint32_t
#define nčíslo64_t uint64_t

// Logic controllers
#define kdyžť if
#define jestli if
#define jinako else
#define obak else
#define doňadž while
#define doněž while
#define próvod for
#define hotoviti do
#define napínač switch
#define případ case
#define obecný default
#define rozbiti break
#define prodliti continue

// Keywords 
#define vrátiti return
#define stálý static
#define trpné const
#define trpný const
#define tuhý const
#define tržeti goto
#define velikost(x) sizeof(x)
#define množnost(x) sizeof(x)

#define najpřědní main
#define úhlavní main

// Operators
#define roveň ==
#define rovnati ==
#define rovnánie ==
#define nýrovnanie !=
#define nerovně !=
#define ný !

// Block controllers
#define začětie {
#define končenie }

// File access permissions 
#define PŘĚČITÁNIE "r"
#define ZÁPIS "w"
#define PŘÍPIS "a"
#define DVOJNÉ_PŘEČITÁNIE "rb"
#define DVOJNÝ_ZÁPIS "wb"
#define DVOJNÝ_PŘÍPIS "wa"

// Standard i/o streams 
#define obyčejvstup stdin
#define obyčejvýstupenie stdout
#define obyčejvýstup stdout
#define obyčejblud stderr

// Constants
#define pravdicě 1
#define pravda 1
#define klam 0
#define nýpravda 0
#define nepravda 0
#define KŘ '\n'
#define NULA NULL

// <stdio.h>
#define mazati(x) remove(x)
#define přězdieti(x, y) rename(x, y)
#define útlsoubor() tmpfile()
#define útljmén(x) tmpnam(x)
#define szatvořiti(x) fclose(x)
#define szplaviti(x) fflush(x)
#define sotvořiti(x, y) fopen(x, y)
#define svnověotvořiti(x, y, z) freopen(x, y, z)
#define napřistimiesto(x, y) setbuf(x, y)
#define přenapřistimiesto(x, y, z, a) setvbuf(x, y, z, a)
#define fpotískatif(...) fprintf(__VA_ARGS__)
#define fčístif(...) fscanf(__VA_ARGS__)
#define potískatif(...) printf(__VA_ARGS__)
#define čístif(...) scanf(__VA_ARGS__)
