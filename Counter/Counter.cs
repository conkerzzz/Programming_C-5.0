using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Counter
{
    /*
     * A basic class example.
     * */
    public class Counter
    {
        private int _count;
        private static int _totalCount;

        public int GetNextValue()
        {
            this._count += 1; //Optionally  Imay use "this" keyword to indicate explicitly that _count is a member of the instance on which the GetNextValue method was invoked. Explicit member access through "this" is sometimes necessary due to name collisions. 
            _totalCount += 1; //Notice that I'm free to use this static field inside GetNextValue, in exactly the same way as the non-static count.
            return _count;
        }
        public static int TotalCount //Static, so has only access to other static members. 
        {
            get
            {
                return _totalCount;
            }
        }
    }
}
