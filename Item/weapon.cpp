class weapon : public Item
{
    private:
    int m_speed
    int m_maxMunition;

public:

    Weapon(string name, int munition,int maxMunition, int speed, bool isEquip) :
        m_name(name), m_munition(munition), m_maxMunition(maxMunition), m_speed(speed), m_isEquip(isEquip){}

    void Shoot() {
        int consumption = m_speed; 
        if (m_munition > 0) {
            if (m_munition >= consumption) {
                m_munition -= consumption;
            } else {
                m_munition = 0;
            }
            cout << m_name << "Il te reste " << m_munition << " munitions" << endl;
        } else {
            cout << m_name << " Tu n'as plus de munitions. Rechargement en cours..." << endl;
            Reload();
        }
    }

   void Reload() {
        if (m_munition < m_maxMunition) {
            m_munition = m_maxMunition;
            cout << m_name << " a été rechargé à " << m_munition << " munitions" << endl;
        } else {
            cout << m_name << " est déjà plein" << endl;
        }
    }

    int getMaxMunition(){
        return m_maxMunition;
    }
    void show() override {
        Item::show();
        cout << "Speed: " << m_speed << endl;
        cout << "Capacité de l'arme :" << m_maxMunition << endl;
    }
    
    *Item item = new item("AK47", 30, 30, 3, false);
    *Item item = new item("Pistolet", 15, 15, 1, false);

};

