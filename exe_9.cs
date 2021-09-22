sing System;

namespace Exercicios_aula
{
    class Program
    {

static void Main(string[] args)
{

Console.Write("Introduza a nota1 = ");
    int nota01 = Convert.ToInt32(Console.ReadLine());
    
     Console.Write("Introduza a nota2 = ");
     int nota02 = Convert.ToInt32(Console.ReadLine());

    Console.Write("Introduza a nota3 = ");
    int nota03 = Convert.ToInt32(Console.ReadLine());

    double media_final = ((nota01 *2) + (nota02*3)+ (5 * nota03))/10;

    Console.WriteLine( "Sua media final é "+ media_final );


}
}
}


