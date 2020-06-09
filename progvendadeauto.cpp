// programa de gerenciamento da compra de um carro em C++
#include <iostream>
#include <string>
using namespace std;
int main()
{	setlocale(LC_ALL, "ptb");
    int carro,num1,num2,opcao,contador,res;
    char resposta,escolha,escolho;
    string marca,resposta1,inicio;
    float Valor,IPI,taxa,total, desc;
               
    IPI = 0.08;
    desc =  3,5/100;
    inicio:
    cout<< "\n################################\n";
    cout<< "\n#######Sistema de vendas########\n";
    cout<< "\n################################\n";
    cout<< "\n Escolha o modelo do veiculo :\n";
    cout<< "\n  [1] Celta 1.0   /  [2]Gol 1.0 G5 /  [3]Palio 1.0 \n";
    cin>> carro;
    	switch(carro)
       {	
           
	    		
		    case 1: carro;
			case 2: carro;
			case 3: carro;
			 {
			
            	Valor = 30.000;
            	marca = "Celta 1.0 ";
              	cout << "O veiculo escolhido foi "<<marca<<"\n";
              	cout << " este e o valor do seu veiculo R$ "<< Valor<<"\n";
              	cout<< "\n deseja inserir opcionais neste modelo de carro (Sim (1) / Não (0))?";
              	cin>> res;
              		if (res == 0){
              			 contador = 0;
                            taxa = Valor * IPI;
                            total = Valor + taxa;
                            cout<<"\n O valor do seu veiculo é R$ "<<Valor;
                            cout<<"\nValor do IPI equivalente a 8% é R$ "<<taxa;
                            cout<<"\nValor total a ser pago é de R$"<<total - desc;
					  }
					  
					else {
						
						cout<<"\n Deseja selecionar a opçao completo? Você receberá uma desconto Promocional! \n escolha a opção [4], \n caso queira inserir opcionais aperte [1]\n";
						cin>>res;
						
					if (res == 4){
						
						 cout<< "\nVoce escolheu completo";
                             Valor = Valor - 3,5/100;
                             taxa = Valor * IPI;
                             total = Valor + taxa;
                             cout<<"\n O valor do seu veiculo é R$ "<<Valor;
                             cout<<"\n Valor do IPI equivalente a 8% é R$ "<<taxa;
                             cout<<"\n Valor total a ser pago é de R$ "<<total;
                             cout<<"\n Parabens pela acsição! ";
                            
					}	
					}
                    if (res == 1){
                           cout<< "\nSelecione os opcionais desejados: \n";
                           cout<< "\n 1- Trio Eletrico (Alarme, Vidro e Trava eletrica) Custa 2% do valor + IPI";
                           cout<< "\n 2- Ar-Condicionado R$ 2%" ;
                           cout<< "\n 3- Direcao hidraulica R$ 2%";
                           cout<< "\n 0- nenhum adicional";
                           cout<< "\nNa compra do modelo completo ganhará um grande desconto\n";
                           cout<< "\n Pagara com o desconto de 3,5% do valor total com adicional e IPI incluso\n";
                           cin>> opcao;
                                switch (opcao)
                                    {
									
                                        case 0: cout<< "\nVoce nao selecionou nenhum opcional";
                                        cout<< "\ndeseja finalizar sua compra ? (Sim (1) / Não (0))\n";
                                        cin>> res;
                    if (res == 1){
                            contador = 0;
                            taxa = Valor * IPI;
                            total = Valor + taxa;
                            cout<<"\n O valor do seu veiculo é R$ "<<Valor;
                            cout<<"\nValor do IPI equivalente a 8% é R$ "<<taxa;
                            cout<<"\nValor total a ser pago é de R$"<<total - desc;
                        	                            
							
                                }
                    else{   
                    					
                            case 1:
                            cout<< "\nVoce selecionou o Trio eletrico (alarme, trava, vidro eletrico) ";
                            contador = 1;
                            Valor = Valor * 2/100 + Valor;
                            taxa = Valor * IPI;
                            total = Valor + taxa;
                            cout<<"\n O valor do seu veiculo é R$ "<<Valor;
                            cout<<"\n Valor do IPI equivalente a 8% é R$ "<<taxa;
                            cout<<"\n Valor total a ser pago é de R$ "<< total;
                            cout<<"\ndeseja finalizar a compra ou adicionar outro opcional ?";
                            cout<<"\nFinalizar compra (1) - adicionar outro opcional (0)\n";
                            cin>> res;}
                    if (res == 1){
                            cout<<"\nQuantidade de Opcional selecionado "<< contador<<"\n";
                            system("pause");
                                 }
                    else{
                            cout<<"Voce ja selecionou o trio eletrico, selecione outro opcional";
                            cout<< "\n 2- Ar-Condicionado + R$ 2%" ;
                            cout<< "\n 3- Direcao hidraulica + R$ 2%";
                            cin>> opcao;
                            
                    switch (opcao){
                            case 2:
                            cout<< "\nVoce selecionou o Ar-condicionado 2% do valor de fabrica";
                            contador = 2;
                            Valor = Valor * 2/100 + Valor;
                            taxa = Valor * IPI;
                            total = Valor + taxa;
                            cout<<"\n O valor do seu veiculo é R$ "<<Valor;
                            cout<<"\n Valor do IPI equivalente a 8% é R$ "<<taxa;
                            cout<<"\n Valor total a ser pago é de R$ "<<total;
                            cout<<"\n deseja finalizar a compra ou adicionar outro opcional ?";
                            cout<<"\n Finalizar compra (1) - adicionar outro opcional (0)\n";
                            cin>> res;
                    if (res == 1){
                            cout<<"\nQuantidade de Opcional selecionado "<< contador<<"\n";
                                 }
                    else{
                            case 1:
                            cout<<"\nVoce ja selecionou o trio eletrico, selecione outro opcional";
                            cout<< "\nVoce ja selecionou o ar-condicionado, selecione outro opcional";
                            cout<< "\n 3- Direcao hidraulica R$ 2%";
                            cin>> opcao;
                            switch (opcao){
                            case 3:
                            cout<< "\nVoce selecionou a direcao hidraulica custa 2% do valor do veiculo";
                            contador = 3;
                            Valor = Valor *2/100 + Valor;
                            taxa = Valor * IPI;
                            total = Valor + taxa;
                            cout<<"\n O valor do seu veiculo é R$ "<<Valor;
                            cout<<"\n Valor do IPI equivalente a 8% é R$ "<<taxa;
                            cout<<"\n Valor total a ser pago é de R$ "<<total;
                            cout<<"\n deseja finalizar a compra ou Voltar ao menu principal ?";
                            cout<<"\n Finalizar compra (1) - Voltar ao menu principal (0)\n";
                            cin>> res;
                    if (res == 1){
                            cout<<"\nQuantidade de Opcional selecionado "<< contador<<"\n";
                            system("pause");
                                 }}
                     if (res == 0) {
                    	goto inicio;
					}
					
                    
					 	    system("pause");
                                        }
                                     	break;   
                                     }
				}
                    	    		
            switch (carro) {
						 
							 
		    	 case 2:  {
								
						Valor = 45000.00;
            					marca = "Gol G5 1.0 ";
            					cout << "O veiculo escolhido foi "<<marca<<"\n";
            					cout << " este e o valor do seu veiculo R$ "<< Valor<<"\n";
              					cout<< "\n deseja inserir opcionais neste modelo de carro (Sim (1) / Não (0))?";
              					cin>> res;
              		if (res == 0){
              			 contador = 0;
                            taxa = Valor * IPI;
                            total = Valor + taxa;
                            cout<<"\n O valor do seu veiculo é R$ "<<Valor;
                            cout<<"\nValor do IPI equivalente a 8% é R$ "<<taxa;
                            cout<<"\nValor total a ser pago é de R$"<<total - desc;
					  }
					  
					else {
						
						cout<<"\n Deseja selecionar a opçao completo? Você receberá uma desconto Promocional! \n escolha a opção [4], \n caso queira inserir opcionais aperte [1]\n";

						cin>>res;
						
					if (res == 4){
						
						 cout<< "\nVoce escolheu completo";
                             Valor = Valor - 3,5/100;
                             taxa = Valor * IPI;
                             total = Valor + taxa;
                             cout<<"\n O valor do seu veiculo é R$ "<<Valor;
                             cout<<"\n Valor do IPI equivalente a 8% é R$ "<<taxa;
                             cout<<"\n Valor total a ser pago é de R$ "<<total;
                             cout<<"\n Parabens pela acsição! ";
                            
					}	
					}
                    if (res == 1){
                           cout<< "\nSelecione os opcionais desejados: \n";
                           cout<< "\n 1- Trio Eletrico (Alarme, Vidro e Trava eletrica) Custa 2% do valor + IPI";
                           cout<< "\n 2- Ar-Condicionado R$ 2%" ;
                           cout<< "\n 3- Direcao hidraulica R$ 2%";
                           cout<< "\n 4- Completo (itens 1,2 e 3 juntos) R$";
                           cout<< "\n 0- nenhum adicional";
                           cout<< "\nNa compra do modelo completo ganhará um grande desconto\n";
                           cout<< "\n Pagara com o desconto de 3,5% do valor total com adicional e IPI incluso\n";
                           cin>> opcao;
                                switch (opcao)
                                    {
									
                                        case 0: cout<< "\nVoce nao selecionou nenhum opcional";
                                        cout<< "\ndeseja finalizar sua compra ? (Sim (1) / Não (0))\n";
                                        cin>> res;
                    if (res == 1){
                            contador = 0;
                            taxa = Valor * IPI;
                            total = Valor + taxa;
                            cout<<"\n O valor do seu veiculo é R$ "<<Valor;
                            cout<<"\nValor do IPI equivalente a 8% é R$ "<<taxa;
                            cout<<"\nValor total a ser pago é de R$"<<total - desc;
                        	                            
							
                                }
                    else{
                        
                           
                        
                            case 1:
                            cout<< "\nVoce selecionou o Trio eletrico (alarme, trava, vidro eletrico) ";
                            contador = 1;
                            Valor = Valor * 2/100 + Valor;
                            taxa = Valor * IPI;
                            total = Valor + taxa;
                            cout<<"\n O valor do seu veiculo é R$ "<<Valor;
                            cout<<"\n Valor do IPI equivalente a 8% é R$ "<<taxa;
                            cout<<"\n Valor total a ser pago é de R$ "<< total;
                            cout<<"\ndeseja finalizar a compra ou adicionar outro opcional ?";
                            cout<<"\nFinalizar compra (1) - adicionar outro opcional (0)\n";
                            cin>> res;}
                    if (res == 1){
                            cout<<"\nQuantidade de Opcional selecionado "<< contador<<"\n";
                            system("pause");
                                 }
                    else{
                            cout<<"Voce ja selecionou o trio eletrico, selecione outro opcional";
                            cout<< "\n 2- Ar-Condicionado + R$ 2%" ;
                            cout<< "\n 3- Direcao hidraulica + R$ 2%";
                            cin>> opcao;
                            
                    switch (opcao){
                            case 2:
                            cout<< "\nVoce selecionou o Ar-condicionado 2% do valor de fabrica";
                            contador = 2;
                            Valor = Valor * 2/100 + Valor;
                            taxa = Valor * IPI;
                            total = Valor + taxa;
                            cout<<"\n O valor do seu veiculo é R$ "<<Valor;
                            cout<<"\n Valor do IPI equivalente a 8% é R$ "<<taxa;
                            cout<<"\n Valor total a ser pago é de R$ "<<total;
                            cout<<"\n deseja finalizar a compra ou adicionar outro opcional ?";
                            cout<<"\n Finalizar compra (1) - adicionar outro opcional (0)\n";
                            cin>> res;
                    if (res == 1){
                            cout<<"\nQuantidade de Opcional selecionado "<< contador<<"\n";
                                 }
                    else{
                             case 3:
                            cout<<"\nVoce ja selecionou o trio eletrico, selecione outro opcional";
                            cout<< "\nVoce ja selecionou o ar-condicionado, selecione outro opcional";
                            cout<< "\n 3- Direcao hidraulica  +R$ 2%";
                            cin>> opcao;
                            switch (opcao){
                            case 3:
                            cout<< "\nVoce selecionou a direcao hidraulica custa 2% do valor do veiculo";
                            contador = 3;
                            Valor = Valor *2/100 + Valor;
                            taxa = Valor * IPI;
                            total = Valor + taxa;
                            cout<<"\n O valor do seu veiculo é R$ "<<Valor;
                            cout<<"\n Valor do IPI equivalente a 8% é R$ "<<taxa;
                            cout<<"\n Valor total a ser pago é de R$ "<<total;
                            cout<<"\n deseja finalizar a compra ou Voltar ao menu principal ?";
                            cout<<"\n Finalizar compra (1) - Voltar ao menu principal (0)\n";
                            cin>> res;
                    if (res == 1){
                            cout<<"\nQuantidade de Opcional selecionado "<< contador<<"\n";
                            system("pause");
                                 }
                    else{
                            goto inicio;	
					 	    system("pause");
                                        }
                    	    		 break;
                            		 }
                            		 
                    switch (carro) {
						 
							 
		    					case 3 :  {
            					Valor = 40000.00;
            					marca = "Palio 1.0 ";
            					  cout << "O veiculo escolhido foi "<<marca<<"\n";
            					  cout << " este e o valor do seu veiculo R$ "<< Valor<<"\n";
              						cout<< "\n deseja inserir opcionais neste modelo de carro (Sim (1) / Não (0))?";
              						cin>> res;
              		if (res == 0){
              			 contador = 0;
                            taxa = Valor * IPI;
                            total = Valor + taxa;
                            cout<<"\n O valor do seu veiculo é R$ "<<Valor;
                            cout<<"\nValor do IPI equivalente a 8% é R$ "<<taxa;
                            cout<<"\nValor total a ser pago é de R$"<<total - desc;
					  }
					  
					else {  
						
						cout<<"\n Deseja selecionar a opçao completo? Você receberá uma desconto Promocional! \n escolha a opção [4], \n caso queira inserir opcionais aperte [1]\n";

						cin>>res;
						
					if (res == 4){
						
						 cout<< "\nVoce escolheu completo";
                             Valor = Valor - 3,5/100;
                             taxa = Valor * IPI;
                             total = Valor + taxa;
                             cout<<"\n O valor do seu veiculo é R$ "<<Valor;
                             cout<<"\n Valor do IPI equivalente a 8% é R$ "<<taxa;
                             cout<<"\n Valor total a ser pago é de R$ "<<total;
                             cout<<"\n Parabens pela acsição! ";
                            
					}	
					}
                    if (res == 1){
                           cout<< "\nSelecione os opcionais desejados: \n";
                           cout<< "\n 1- Trio Eletrico (Alarme, Vidro e Trava eletrica) Custa 2% do valor + IPI";
                           cout<< "\n 2- Ar-Condicionado R$ 2%" ;
                           cout<< "\n 3- Direcao hidraulica R$ 2%";
                           cout<< "\n 4- Completo (itens 1,2 e 3 juntos) R$";
                           cout<< "\n 0- nenhum adicional";
                           cout<< "\nNa compra do modelo completo ganhará um grande desconto\n";
                           cout<< "\n Pagara com o desconto de 3,5% do valor total com adicional e IPI incluso\n";
                           cin>> opcao;
                                switch (opcao)
                                    {
									
                                        case 0: cout<< "\nVoce nao selecionou nenhum opcional";
                                        cout<< "\ndeseja finalizar sua compra ? (Sim (1) / Não (0))\n";
                                        cin>> res;
                    if (res == 1){
                            contador = 0;
                            taxa = Valor * IPI;
                            total = Valor + taxa;
                            cout<<"\n O valor do seu veiculo é R$ "<<Valor;
                            cout<<"\nValor do IPI equivalente a 8% é R$ "<<taxa;
                            cout<<"\nValor total a ser pago é de R$"<<total - desc;
                        	                            
							
                                }
                    else{
                        
                           
                        
                            case 1:
                            cout<< "\nVoce selecionou o Trio eletrico (alarme, trava, vidro eletrico) ";
                            contador = 1;
                            Valor = Valor * 2/100 + Valor;
                            taxa = Valor * IPI;
                            total = Valor + taxa;
                            cout<<"\n O valor do seu veiculo é R$ "<<Valor;
                            cout<<"\n Valor do IPI equivalente a 8% é R$ "<<taxa;
                            cout<<"\n Valor total a ser pago é de R$ "<< total;
                            cout<<"\ndeseja finalizar a compra ou adicionar outro opcional ?";
                            cout<<"\nFinalizar compra (1) - adicionar outro opcional (0)\n";
                            cin>> res;}
                    if (res == 1){
                            cout<<"\nQuantidade de Opcional selecionado "<< contador<<"\n";
                            system("pause");
                                 }
                    else{
                            cout<<"Voce ja selecionou o trio eletrico, selecione outro opcional";
                            cout<< "\n 2- Ar-Condicionado + R$ 2%" ;
                            cout<< "\n 3- Direcao hidraulica + R$ 2%";
                            cin>> opcao;
                            
                    switch (opcao){
                            case 2:
                            cout<< "\nVoce selecionou o Ar-condicionado 2% do valor de fabrica";
                            contador = 2;
                            Valor = Valor * 2/100 + Valor;
                            taxa = Valor * IPI;
                            total = Valor + taxa;
                            cout<<"\n O valor do seu veiculo é R$ "<<Valor;
                            cout<<"\n Valor do IPI equivalente a 8% é R$ "<<taxa;
                            cout<<"\n Valor total a ser pago é de R$ "<<total;
                            cout<<"\n deseja finalizar a compra ou adicionar outro opcional ?";
                            cout<<"\n Finalizar compra (1) - adicionar outro opcional (0)\n";
                            cin>> res;
                    if (res == 1){
                            cout<<"\nQuantidade de Opcional selecionado "<< contador<<"\n";
                                 }
                    else{
                            parada3:
                            cout<<"\nVoce ja selecionou o trio eletrico, selecione outro opcional";
                            cout<< "\nVoce ja selecionou o ar-condicionado, selecione outro opcional";
                            cout<< "\n 3- Direcao hidraulica + R$ 2%";
                            cin>> opcao;
                            switch (opcao){
                            case 3:
                            cout<< "\nVoce selecionou a direcao hidraulica custa 2% do valor do veiculo";
                            contador = 3;
                            Valor = Valor *2/100 + Valor;
                            taxa = Valor * IPI;
                            total = Valor + taxa;
                            cout<<"\n O valor do seu veiculo é R$ "<<Valor;
                            cout<<"\n Valor do IPI equivalente a 8% é R$ "<<taxa;
                            cout<<"\n Valor total a ser pago é de R$ "<<total;
                            cout<<"\n deseja finalizar a compra ou Voltar ao menu principal ?";
                            cout<<"\n Finalizar compra (1) - Voltar ao menu principal (0)\n";
                            cin>> res;
                    if (res == 1){
                            cout<<"\nQuantidade de Opcional selecionado "<< contador<<"\n";
                            system("pause");
                                 }
                    else{
                            goto inicio;
					 	    system("pause");
                                        }
                    	    		 break;
                            		 }
          
                       			 		 }
                  					  		 }
                 
       							 			 }
                                         }
                               }
                           }
                
				}
  		}		
		}
	}		
	}
	}
	}
}
          
                       			 		 }
                  					  		 }
                 
       							 			 }
                                         }
                               }
                           