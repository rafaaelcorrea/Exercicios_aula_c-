using System;

namespace Exercicios_aula
{
    class Program
    {
        static void Main(string[] args)
        {

            Console.WriteLine("Digite seu salário : ");
            string Salario = Console.ReadLine();

            Console.WriteLine("Digite a Quantidade de carros Vendidos: ");
            string CarVend = Console.ReadLine();

            Console.WriteLine("Digite a Comissão Fixa: ");
            string ComissaoFixa = Console.ReadLine();

            Console.WriteLine("Digite o Valor total de carros vendido no mês (R$): ");
            string ValorTotal = Console.ReadLine();

            double salarioFixo = Convert.ToInt32(Salario);
            double carVend = Convert.ToInt32(CarVend);
            double comissaoFixa = Convert.ToInt32(ComissaoFixa);
            double valorVendido = Convert.ToInt32(ValorTotal);

            double comissaoTotal = carVend * comissaoFixa;
            double comissaoValorDeVendas = valorVendido * 5 /100;

            double salarioTotal = salarioFixo + ( comissaoTotal + comissaoValorDeVendas);

            Console.WriteLine( " O Vendedor ganhou de salário o valor de R$ " + salarioTotal );

        }
    }
}
