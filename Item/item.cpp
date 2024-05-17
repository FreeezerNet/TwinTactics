#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Item {
    string m_name;
    int m_munition;
    bool m_isEquip = false;

    vector <Item*> ListItems;
    
public :
    Item(string name, int munition, bool isEquip) :
        m_name(name), m_munition(munition), m_isEquip(isEquip){}

    void show (){
        cout << "Name :" << m_name << endl;
        cout << "Munition :" << m_munition << endl;
    }

    void ImEquip(){
        isEquip = true
        cout << m_name << "est equipé" << endl;
    }

    string GetName{
        return m_name;
    }

    int getMunition(){
        return m_munition;
    }

    void addItem(Item* item) {
        ListItems.push_back(item);
        cout << item->GetName() << " a été ajouté à la liste." << endl;
    }

};
