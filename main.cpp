#include <bits/stdc++.h>

using namespace std;

int main(){

	unsigned int numInicial,originaInicio, numFinal,originaFinal;

	while ( cin>>numInicial>>numFinal){
		originaInicio = numInicial;
		originaFinal = numFinal;
		if(numInicial>numFinal){
			swap(numInicial,numFinal);
		}
        int variar = numInicial;
        int maximo=0;
        while(variar<=numFinal){
        	unsigned int temporal = variar;
            int contador = 1;
            if(buscar[variar]==0){
                while(temporal!=1){ 

                    if(temporal%2==0){
                        temporal = temporal/2;
                    }
                    else{
                        temporal = (temporal*3) + 1;
                    }
                    contador++;
                }

                
               buscar[variar]=contador;

            }
            else{
                contador = buscar[variar];
            }
            if(contador>maximo){
                maximo = contador;        
            }
            variar++;
        }

        std::cout<<originaInicio<<" "<<originaFinal<<" "<<maximo<<"\n";
        

	}
	

	return 0;

}
