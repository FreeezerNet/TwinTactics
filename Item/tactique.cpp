class tactique : public Item
{
    private :
    int m_heal;

    public : 
    Tactique(string name, int munition, int heal bool isEquip) :
        m_name(name), m_munition(munition), m_heal(heal), m_isEquip(isEquip){}

    void heal(Character& character) {
        character.Heal(m_heal);
    }

    void show() override {
        Item::show();
        cout << "Heal : " << m_heal << "pv"<< endl;
    }

    *Tactique tactique = new tactique("kit", 2, 20, false);
    *Tactique tactique = new tactique("bandage", 5, 5, false);
    *Tactique tactique = new tactique("MegaKit", 1, 50, false);
    items.push_back(tactique);

    
}

