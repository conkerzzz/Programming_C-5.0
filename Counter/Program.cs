using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Counter
{
    class Program
    {
        static void Main(string[] args)
        {
            Counter c1 = new Counter();
            Counter c2 = new Counter();
            Console.WriteLine("c1: " + c1.GetNextValue());
            Console.WriteLine("c1: " + c1.GetNextValue());
            Console.WriteLine("c1: " + c1.GetNextValue());
            Console.WriteLine("c2: " + c2.GetNextValue());
            Console.WriteLine("c1: " + c1.GetNextValue());
            Console.WriteLine("TotalCount: " + Counter.TotalCount); //Using a static property
        }
    }
}
