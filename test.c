  #include <stdio.h>
float qht, vht;

float salario(float qht, float vht){
  // float sal, qht, vht;
  float sal=(qht*vht);
  sal=sal-(sal*0.11);
  return(sal);
}




int main(){
  // salario(80, 100);

  printf("%.2f", salario(8,40));
}







//  int main(){

//   char  nome[30];
// // float qht, vht, sal;
//     printf("Nome do funcionario:");
//      scanf("%s", nome);
      
//       printf("Quantidades de horas trabalhadas:");
//        scanf("%f", &qht);

//         printf("Valor da hora trabalhada:");
//          scanf("%f", &vht);

//         printf("%s tem salario equivalente a %.2f", nome, sal);
//  }
















 
          // printf("Valor do Vale Alimentacao:");
          //  scanf("%f", &va);

            // printf("Valor do Vale Refeicao:");
            //  scanf("%f", &vr);
              
              // printf("Valor do Vale Transporte:");
              //  scanf("%f", &vt);
              
                // printf("Quantidade de hora extra:");
                //  scanf("%f", &qhx);
                  
              // vhx=qhx*vht;
              // sal=(qht*vht)-11%;
              // saldo=vhx+sal;