using System;

namespace Exercicios_aula
{
    class Program
    {
        static void Main(string[] args){


            Console.WriteLine("Digite a base do  Retângulo");
            int  base1 = Convert.ToInt32(Console.ReadLine());

             Console.WriteLine("Digite a altura  do  Retângulo");
            int  altura = Convert.ToInt32(Console.ReadLine());
    

            int calcularArea =  base1 * altura;


            
            Console.WriteLine("A área do Retângulo é : " + calcularArea + "cm²");
        }
    }
}
