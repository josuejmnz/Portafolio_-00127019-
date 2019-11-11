#include <iostream>
#include <string>
using namespace std;

int buscar(char elto, char *a, int l){
    int indice = -1;
    for (int i = 0; i < l; i++) {
        if(elto == a[i]){
            indice = i;
            break;
        }
    }
    return indice;
}

char metodo2(char letra){
    char ori[27] = "abcdefghijklmnopqrstuvwxyz";
    char sus[27] = "qwertyuiopasdfghjklzxcvbnm";
    
    int i_ori = buscar(letra, ori, 27);
    
    if(i_ori >= 0)
        return sus[i_ori];
    else
        return letra;
}

char metodo1(char letra){
    switch(letra){
        case 'a': return '1'; break;
        case 'e': return '2'; break;
        case 'i': return '3'; break;
        case 'o': return '4'; break;
        case 'u': return '5'; break;
        default: return letra;
    }
}

void codificar(string f, int i, int n){
    if(i == n)
        return;
    else{
        cout << metodo2(f[i]);
        codificar(f, i+1, n);
    }
}

int main()
{
    string frase;
    
    cout <<"Frase a codificar: ";
    getline(cin, frase);
    
    cout << "Frase codificada: ";
    codificar(frase, 0, frase.length());

    return 0;
}
