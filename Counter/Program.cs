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
            //Ex. 3-8, using an immutable counter
            Counter c1 = new Counter();
            
            Counter c2 = c1; 
            //Copying references. Any type defined with the class keyword will be a reference type, meaning that any
            //variable of this type is merely a reference to an instance of the type.

            c1++;
            Console.WriteLine("c1: " + c1.Count);
            c1++;
            Console.WriteLine("c1: " + c1.Count);
            c1 = c1.GetNextValue();
            Console.WriteLine("c1: " + c1.Count);

            c2++;
            Console.WriteLine("c2: " + c2.Count);

            c1++;
            Console.WriteLine("c1: " + c1.Count);
            
        }
    }
}
