using System;

namespace Exercicios_aula
{
    class Program
    {
        static void Main(string[] args){

            // int dadoCapturado = ;

            Console.WriteLine("Digite um número:");

            int dadoCapturado = Convert.ToInt32(Console.ReadLine());

            double calcularAntecessor = dadoCapturado - 1 ;

            
            Console.WriteLine("O antecessor é : "  + calcularAntecessor );
        }
    }
}
