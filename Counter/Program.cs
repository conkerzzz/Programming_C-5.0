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
            //Ex. 3-9, comparing references
            Counter c1 = new Counter();
            c1++;
            Counter c2 = c1; 
            //Copying references. Any type defined with the class keyword will be a reference type, meaning that any
            //variable of this type is merely a reference to an instance of the type.
            Counter c3 = new Counter();
            c3++;

            Console.WriteLine(c1.Count);
            Console.WriteLine(c2.Count);
            Console.WriteLine(c3.Count);

            //== does object identity comparison when the operands are of reference types. However types are allowed to redefine the == operator so...
            Console.WriteLine(c1 == c2);
            Console.WriteLine(c1 == c3);
            Console.WriteLine(c2 == c3);

            //...if I want to force comparision of object identity, use statis object.ReferenceEquals method.
            // Here, only c1 and c2 are considered to be the same thing. It will be the same output as the above lines because Counter has not defined a custom meaning for ==.
            Console.WriteLine(object.ReferenceEquals(c1, c2));
            Console.WriteLine(object.ReferenceEquals(c1, c3));
            Console.WriteLine(object.ReferenceEquals(c2, c3));          
        }
    }
}
