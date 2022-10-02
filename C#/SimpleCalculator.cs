using System;

namespace BetterCalculator
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Enter first number: ");
            double num1 = Convert.ToDouble(Console.ReadLine());
            Console.Write("Enter a opertor: ");
            string op = Console.ReadLine();
            Console.Write("Enter second number: ");
            double num2 = Convert.ToDouble(Console.ReadLine());
            if (op=="+")
            {
                Console.WriteLine(num1 + num2);
            }else if(op == "-")
            {
                Console.WriteLine(num1 - num2);
            }else if(op== "*"){
                Console.WriteLine(num1 * num2);
            }
            else if (op == "/")
            {
                Console.WriteLine(num1 / num2);
            }
            else
            {
                Console.WriteLine("Error");
            }
        }
    }
}