#include "campuszentrum.h"


campuszentrum::campuszentrum()
{
    raeume.push_back(new raum());

}

void campuszentrum::dialog()
{

    int auswahl;

    do
    {
        cout << endl;
        cout << "1: Reservierung anlegen" <<endl;
        cout << "2: Reservierung anzeigen" <<endl;
        cout << "3: Alle Reservierungen anzeigen" <<endl;
        cout << "0: Programm beenden"<< endl;

        cin>> auswahl;

        switch(auswahl)
        {
        case 1:
        {
            int nummer;
            string kunde;
            int start;
            int ende;

            cout << "Reservierungsnummer? ";
            cin >> nummer;

            cout << "Kunde? ";
            cin >> kunde;

            cout << "Startzeit? ";
            cin >> start;

            cout << "Endzeit? ";
            cin >> ende;

            reservierung r (nummer, kunde, start, ende);

            raeume[0]->reservieren(r);

            break;
        }
        case 2:
        {
            int nummer;

            cout << "Reservierungsnummer? ";
            cin >> nummer;
            raeume[0]->reservierungAnzeigen(nummer);

            break;
        }
        case 3:
            raeume[0]-> alleReservierungenAnzeigen();


            break;


    case 0:

        break;

    default:
        cout << "Falsche Eingabe!" << endl;
    }

}
    while (auswahl !=0);
}
