using System;

namespace Exercicios_aula
{
    class Program
    {
        static void Main(string[] args){

            int votosNulos , votosValidos , votosBrancos , totalEleitores = 0 ;




            Console.WriteLine("Digite o numero total de votos nulos");
              votosNulos = Convert.ToInt32(Console.ReadLine());

              Console.WriteLine("Digite o numero total de votos brancos");
              votosBrancos = Convert.ToInt32(Console.ReadLine());
            
            
              Console.WriteLine("Digite o numero total de votos válidos");
             votosValidos = Convert.ToInt32(Console.ReadLine());

                Console.WriteLine("Digite o numero total de Eleitores");
             totalEleitores = Convert.ToInt32(Console.ReadLine());




            double  porcentVotosNulos = 100 * (votosNulos / totalEleitores);

            double porcentVotosValidos = 100 * (votosValidos / totalEleitores);

            double porcentVotosBrancos = 100 * (votosBrancos / totalEleitores);

            if ( votosNulos < 0) {

                Console.WriteLine("Valor do voto nulo inconpatível" );


            } else {

                Console.WriteLine("Quantidade de votos nulos" + votosNulos ) ;

                Console.WriteLine("Porcentagem de votos nulos " + porcentVotosNulos  );
            }

            if ( votosValidos < 0 ) {

                 Console.WriteLine("Quantidade de votos válidos inconpatível " ) ;

            } else {

                 Console.WriteLine("Quantidade de votos válidos" + votosValidos ) ;

                 Console.WriteLine("Porcentagem de votos válidos" + porcentVotosValidos );


            }

            if ( votosBrancos < 0) {

                 Console.WriteLine("Quantidade de votos brancos inconpatíveis " ) ;

            } else {

                 Console.WriteLine("Quantidade de votos brancos" + votosBrancos) ;

                 Console.WriteLine("Porcentagem de votos validos" + porcentVotosBrancos  );

            }

            if ( totalEleitores <= 0  ) {

                Console.WriteLine("Total de eleiores inválidos") ;


            } else {

                Console.WriteLine("O número total de eleitores são " + totalEleitores) ;

            }



        }
    }
}