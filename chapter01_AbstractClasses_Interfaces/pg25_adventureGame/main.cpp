#include <iostream>
using std::cout;
using std::endl;

/*
+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+
                      WEAPON INTERFACE / SUBCLASSES
+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+
*/

class IWeaponBehavior
{
public:
    virtual void useWeapon(void) = 0;
};

// SUBCLASSES - These override IWeaponBehavior with a specific print statement

class KnifeBehavior : public IWeaponBehavior
{
    void useWeapon() override
    {
        cout << "KnifeBehavior.useWeapon" << endl;
    }
};

class SwordBehavior : public IWeaponBehavior
{
    void useWeapon() override
    {
        cout << "SwordBehavior.useWeapon" << endl;
    }
};

/*
+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+
                      CHARACTER CLASS / SUBCLASSES
+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+
*/

class Character
{
protected:
    IWeaponBehavior* weapon = nullptr;

    // This implementation protects against trying to call a null weapon pointer
    void useWeapon()
    {
        if (this->weapon)
        {
            this->weapon->useWeapon();
        }
        else
        {
            cout << "No weapon selected!" << endl;
        }
    }

public:
    virtual void fight()
    {
        cout << "Character.fight: Using base implementation!" << endl;
    }

    void setWeapon(IWeaponBehavior* w)
    {
        this->weapon = w;
    }
};

// SUBCLASSES - These just override the "fight" method with a specific print statement

class Queen : public Character
{
public:
    void fight() override
    {
        cout << "Queen.fight" << endl;
        this->useWeapon();
    }
};

class King : public Character
{
public:
    void fight() override
    {
        cout << "King.fight" << endl;
        this->useWeapon();
    }
};

/*
+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+
                            MAIN APPLICATION

SUMMARY: 
    1. Instantiates one of each of the above (plus one extra queen to 
    verify that a class without a weapon assigned says there is no weapon.)
    
    2. Assigns a weapon to each character

    3. Calls the useWeapon method

    4. King switches to a sword and uses this weapon once

EXPECTED OUTPUT: 

King.fight                      --> from king
SwordBehavior.useWeapon         --> from king
Queen.fight                     --> from queenWithWeapon
KnifeBehavior.useWeapon         --> from queenWithWeapon
Queen.fight                     --> from queenWithoutWeapon
No weapon selected              --> from queenWithoutWeapon
King.fight                      --> from king
KnifeBehavior.useWeapon         --> from king

+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+
*/
int main()
{
    // Weapon instantiations
    KnifeBehavior knife;
    SwordBehavior sword;

    // Character instantiations
    King king;
    Queen queenWithWeapon;
    Queen queenWithoutWeapon;

    // Linking characters to weapons
    king.setWeapon(&sword);
    queenWithWeapon.setWeapon(&knife);

    // Calling attacks!
    king.fight();
    queenWithWeapon.fight();
    queenWithoutWeapon.fight();

    // King switches to a knife for fun..
    king.setWeapon(&knife);
    king.fight();
    
    return 0;
}