using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApplication2
{
    class Program
    {
        static void Main(string[] args)
        {
            double r, a, b;
            a = double.Parse(Console.ReadLine());
            b = double.Parse(Console.ReadLine()); ;
            r = double.Parse(Console.ReadLine());

           
            double abr = Math.Sqrt(a * a + b * b);
            if (abr < r)
            {
                Console.WriteLine("vatre");
            }
            else if (abr == r)
            {
                Console.WriteLine("leji na neq");
            }
            else
            {
                Console.WriteLine("vun");
            }
            Console.ReadKey(true);
        }
    }
}
