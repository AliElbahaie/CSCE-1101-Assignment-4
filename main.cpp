#include <iostream>
#include "hashlists.hpp"
//#include "hasdynamicarray.hpp"
#include "hashtablearray.hpp"

using namespace std;


int main()
{
    hashtable listTable; //list object
    hashTableArray arrayTable(9); //dynamic array object
    
//employee setting
    Employee Mina{"Mina",30,10000,4};
    Employee Fawzy{"Fawzy" ,45 ,5000, 8};
    Employee Yara {"Yara" ,19, 2000, 0};
    Employee Mariam{"Mariam", 32 ,8000, 2};
    Employee Ayman{"Ayman" ,33, 4000, 8};
    Employee Roshdy {"Roshdy" ,28, 9000, 3};
    Employee Aya{ "Aya", 26, 6000, 3};
    Employee Abdallah{"Abdallah",  29 ,7000 ,4};
    Employee Fatma{"Fatma" ,21 ,3000 ,1};

//employee insertion in linked list
    listTable.insert(Mina);
    listTable.insert(Fawzy);
    listTable.insert(Yara);
    listTable.insert(Mariam);
    listTable.insert(Ayman);
    listTable.insert(Roshdy);
    listTable.insert(Aya);
    listTable.insert(Abdallah);
    listTable.insert(Fatma);
    
    listTable.remove(Fatma);
    listTable.print();


    arrayTable.insert(Mina);
    arrayTable.insert(Fawzy);
    arrayTable.insert(Yara);
    arrayTable.insert(Mariam);
    arrayTable.insert(Ayman);
    arrayTable.insert(Roshdy);
    arrayTable.insert(Aya);
    arrayTable.insert(Abdallah);
    arrayTable.insert(Fatma);
    

    arrayTable.print();
    
}
