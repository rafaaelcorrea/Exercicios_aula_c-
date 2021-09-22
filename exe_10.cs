using System;

namespace Exercicios_aula
{
    class Program
    {

static void Main(string[] args)
 {
            double F = 0, TempMediaF = 0;
            int C = 0, TempMediaC = 0;
            Console.WriteLine(" Informe A Temperatura Media Do Local Em {Fahrenheit}: ");
            TempMediaC = int.Parse(Console.ReadLine());

            Console.WriteLine(" Informe A Temperatura Média Do Local Em {Celsius}: ");
            TempMediaF = double.Parse(Console.ReadLine());


            C = ((TempMediaC - 32) * 5) / 9;
            F = (1.8 * TempMediaF + 32);

            Console.WriteLine(" A Temperatura Média Em Graus Celsius é De: " + C);
            Console.WriteLine(" A Temperatura Média Em Graus Fahrenheit é De: " + F);
           
            Console.ReadKey();

           
        }
    }
}
