using System;

[Flags]
enum FileAccess
{
    None = 0,
    Read = 1,
    Write = 2,
    Execute = 4,
    ReadWrite = Read | Write
}

class Program
{
    static void Main()
    {
        FileAccess access = FileAccess.Read | FileAccess.Write;

        Console.WriteLine($"Access is {access}");

        if ((access & FileAccess.Read) == FileAccess.Read)
        {
            Console.WriteLine("Read access is allowed.");
        }

        if ((access & FileAccess.Write) == FileAccess.Write)
        {
            Console.WriteLine("Write access is allowed.");
        }


        Console.ReadKey();

    }
}
