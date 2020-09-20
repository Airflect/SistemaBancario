#include<iostream>
#include<string.h>
using namespace std;
class banco
{
private:
    string nombre,cel,direcc,email;
    float bal;
public:
    string cuenta;
    void new1()
    {
        
        cout<<"Nombre de la nueva cuenta: ";
        getline(cin,nombre);
        bal=0.0;
    }
    void mostrar()
    {
        cout<<endl;
        cout<<"El nombre de la cuenta es: "<<nombre<<endl;
        cout<<"El numero de la cuenta es: "<<cuenta<<endl;
        cout<<"La direccion de la cuenta es:  "<<direcc<<endl;
        cout<<"El celular de la cuenta es:  "<<cel<<endl;
        cout<<"El email de la cuenta es:  "<<email<<endl;
        cout<<"El balance de la cuenta es: $"<<bal<<endl;
    }
    void retiro(float n)
    {
        
        bal=bal-n;
        cout<<"Se ha retirado $" << n << " de la cuenta"<<endl; 
        cout<<"El nuevo balance de la cuenta es: $"<<bal<<endl;
    }
    void deposito(float n)
    {
        bal=bal+n;
        
        cout<<"Se ha depositado $" << n << " a la cuenta"<<endl; 
        cout<<"El nuevo balance de la cuenta es: $"<<bal<<endl;
    }
    void balance()
    {
        cout<<"El balance de la cuenta es: $"<<bal<<endl;
    }
    string cuent()
    {
        return cuenta;
    }
};
int main()
{
    banco ob[5];
    int opcion,contador_cuentas=0,i,temp1,temp2;
    bool k=1;
    string acc;
    float n;
    do
    {
        int temp1=0;
        cout<<endl;
        cout<<"1. Abrir una cuenta nueva \n 2. Ver todas las cuentas \n 3. Ver una cuenta espectifica \n 4. Retirar \n 5. Depositar \n 6. Balance \n 0. Salir \n";
        cin>>opcion;
        switch(opcion)
        {
        case 1:
            cin.ignore();
            cout<<"Ingresa el nuevo numero de la cuenta: ";
            do
            {
                getline(cin,ob[contador_cuentas].cuenta);
                for(i=0;i<contador_cuentas;i++)
                {
                    if(ob[contador_cuentas].cuenta!=ob[i].cuent())
                    {
                        k=1;
                    }
                    else k=0;

                }
                if(k==1)
                {
                    ob[contador_cuentas].new1();
                    contador_cuentas++;
                }
                else
                {
                    cout<<"Este numero de cuenta ya existe. Intentalo de nuevo."<<endl;
                }
            }while(k!=1);

        break;
        case 2:
            for(i=0;i<contador_cuentas;i++)
            {
                ob[i].mostrar();
            }
            break;
        case 3:
            cout<<"Ingresa el numero de cuenta a revisar: ";
            cin>>acc;
            for(i=0;i<contador_cuentas;i++)
            {
                if(acc==ob[i].cuent())
                {
                    temp1=1;
                    temp2=i;
                }
            }
            if(temp1==1){
                cout<<endl;
                ob[temp2].mostrar();
            }
            else
                cout<<"La cuenta que ingresaste no existe.";
                break;
        case 4:
            cout<<"Ingresa un numero de cuenta: ";
            cin>>acc;
            cout<<"Ingresa la cantidad que quieres retirar: ";
            cin>>n;
            for(i=0;i<contador_cuentas;i++)
            {
                if(acc==ob[i].cuent())
                {
                    temp1=1;
                    int temp2=i;
                }
            }
            if(temp1==1)
                ob[temp2].retiro(n);
            else
                cout<<"La cuenta no existe";
                break;
        case 5:
            cout<<"Ingresa un numero de cuenta: ";
            cin>>acc;
            cout<<"Ingresa la cantidad que quieres depositar: ";
            cin>>n;
            for(i=0;i<contador_cuentas;i++)
            {
                if(acc==ob[i].cuent())
                {
                    temp1=1;
                    int temp2=i;
                }
            }
            if(temp1==1)
                ob[temp2].deposito(n);
            else
                cout<<"La cuenta no existe";
                break;
        case 6:
            cout<<"Ingresa un numero de cuenta: ";
            cin>>acc;
            for(i=0;i<contador_cuentas;i++)
            {
                if(acc==ob[i].cuent())
                {
                    temp1=1;
                    int temp2=i;
                }
            }
            if(temp1==1)
                ob[temp2].balance();
            else
                cout<<"La cuenta no existe";
                break;
        default:
            cout<<"Ingresa una opcion valida";
        }
        if(opcion==0)
            break;
    }while(contador_cuentas!=5);
    return 0;
}



