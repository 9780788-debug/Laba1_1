using System;
namespace Lab1_1
{
    class Program
    {
        static void Main(string[] args)
        {
            Counter_Strike source = new Counter_Strike(0, 0, 3, 4);
            
            Console.WriteLine("Start coo: 5(" + source.X1 + ", "+ source.Y1 + ")");
            Console.WriteLine("End coo: (" + source.X2 + ", "+ source.Y2 + ")");
            Console.WriteLine("Length is for real: " + source.GetLength());
        }

    }
}