using System;

namespace Exercicios_aula
{
    class Program
    {
        static void Main(string[] args){
    
    
            Console.WriteLine("Salário atual: "  );

         int   salario = Convert.ToInt32(Console.ReadLine());

          Console.WriteLine("Percentual  de aumento do salário: "  );

    int   percentualAumento = Convert.ToInt32(Console.ReadLine());

    double salarioCalculado =  salario +  ( (salario * percentualAumento) / 100 ) ;


      Console.WriteLine("Salário reajustado :"  + salarioCalculado);

        }
    }
}