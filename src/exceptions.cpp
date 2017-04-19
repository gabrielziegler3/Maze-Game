// #include <iostream>
// #include <exception>
//
// using namespace std;
//
// int testaExcecao(void) {
//     int valor;
//     cout << "Insira um valor: ";
//     cin >> valor;
//
//     if (valor <= 0) {
// 	throw(10);          // Gera exceção do tipo INT
// 	//throw('c');       // Gera exceção do tipo CHAR
// 	//throw("string");  // Gera exceção do tipo STRING
//     }
//     else
// 	return valor;
// }
//
// int main () {
//     int valor;
//     try{
//         valor = testaExcecao();
//         cout << "Valor = " << valor << endl;
//     }
//     catch (int v){
//         cout << "Excecao do tipo INTEIRO"<< endl;
//     }
//     catch(char a){
// 	cout << "Excecao Capturada do tipo CHAR" << endl;
//     }
//     catch(...) {
// 	cout << "Excecao GENERICA"<< endl;
//     }
//
//     cout << "Codigo apos excecao ......" << endl;
//
//     return 0;
// }
