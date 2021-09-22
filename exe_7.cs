using System;

namespace Exercicios_aula
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Qual o preço de fábrica?");
            string custoFabrica=Console.ReadLine();
    
        int precoFabrica=Convert.ToInt32(custoFabrica);

        double precoFinal=precoFabrica*1.45*1.28;
        Console.WriteLine(precoFinal);

        }
    }
}
