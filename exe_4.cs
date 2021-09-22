using System;

namespace Exercicios_aula
{
    class Program
    {
        static void Main(string[] args){


            Console.WriteLine("Digite o seu ano de nascimento ");
            int  anoNascimento = Convert.ToInt32(Console.ReadLine());

             Console.WriteLine("Digite o seu mês de nascimento");
            int   mesNascimento = Convert.ToInt32(Console.ReadLine());

            
             Console.WriteLine("Digite o seu dia  de nascimento");
            int   diaNascimento = Convert.ToInt32(Console.ReadLine());
    

            double idadeTotalDias =  anoNascimento * 365 + mesNascimento * 30 + diaNascimento;


            
            Console.WriteLine("A idade total de dias  é : " +  idadeTotalDias );
        }
    }
}
