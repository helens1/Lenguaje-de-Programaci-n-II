using System;

namespace inventario
{
    class Program
    {
        static string[,] productos = new string[5,3]
        {
            { "001", "iPhoneX", "0" },
            { "002", "Laptop Dell", "5" },
            { "003", "Monitor Samsung", "2" },
            { "004", "Mouse", "100" },
            { "005", "Headset", "25" },
        };

        static void listarProductos() {
            Console.Clear();
            Console.WriteLine("");
            Console.WriteLine("Listado de Productos");
            Console.WriteLine("********************");
            Console.WriteLine("Codigo, Descripcion y Existencia");

            for (int i = 0; i < 5; i++)
            {
                Console.WriteLine(productos[i, 0] + " | " + productos[i, 1] + " | " + productos[i, 2]);
            }

            Console.ReadLine();
        }

        static void movimientoInventario(string codigo, int cantidad, string tipoMovimiento) {
            for (int i = 0; i < 5; i++)
            {
                if (productos[i, 0] == codigo) {
                    if (tipoMovimiento == "+") {
                        productos[i, 2] = (Int32.Parse(productos[i, 2]) + cantidad).ToString();
                    } else {
                        productos[i, 2] = (Int32.Parse(productos[i, 2]) - cantidad).ToString();
                    }
                }
            }
        }

        static void ingresoDeInventario() {
            string codigo = "";
            string cantidad = "";

            Console.Clear();
            Console.WriteLine();

            Console.WriteLine("Ingreso de Productos al Inventario");
            Console.WriteLine("**********************************");
            Console.Write("Ingrese el codigo del producto: ");
            codigo = Console.ReadLine();
            Console.Write("Ingrese la cantidad del producto: ");
            cantidad = Console.ReadLine();

            movimientoInventario(codigo, Int32.Parse(cantidad), "+");
        }

        static void salidaDeInventario() {
            string codigo = "";
            string cantidad = "";

            Console.Clear();
            Console.WriteLine();

            Console.WriteLine("Ingreso de Productos al Inventario");
            Console.WriteLine("**********************************");
            Console.Write("Ingrese el codigo del producto: ");
            codigo = Console.ReadLine();
            Console.Write("Ingrese la cantidad del producto: ");
            cantidad = Console.ReadLine();

            movimientoInventario(codigo, Int32.Parse(cantidad), "-");
        }
        
        static void ajustePositivoDeInventario() {
            string codigo = "";
            string cantidad = "";

            Console.Clear();
            Console.WriteLine();

            Console.WriteLine("Ingreso de Productos al Inventario");
            Console.WriteLine("**********************************");
            Console.Write("Ingrese el codigo del producto: ");
            codigo = Console.ReadLine();
            Console.Write("Ingrese la cantidad del producto: ");
            cantidad = Console.ReadLine();

            movimientoInventario(codigo, Int32.Parse(cantidad), "+");
        }

        static void ajusteNegativoDeInventario() {
            string codigo = "";
            string cantidad = "";

            Console.Clear();
            Console.WriteLine();

            Console.WriteLine("Ingreso de Productos al Inventario");
            Console.WriteLine("**********************************");
            Console.Write("Ingrese el codigo del producto: ");
            codigo = Console.ReadLine();
            Console.Write("Ingrese la cantidad del producto: ");
            cantidad = Console.ReadLine();

            movimientoInventario(codigo, Int32.Parse(cantidad), "-");
        }        
        
        static void Main(string[] args)
        {
            string opcion = "";

            while (true)
            {
                Console.Clear();
                Console.WriteLine("Sistema de Inventario");
                Console.WriteLine("*********************");
                Console.WriteLine("");
                Console.WriteLine("1 - Productos");
                Console.WriteLine("2 - Ingreso de Inventario");
                Console.WriteLine("3 - Salida de Inventario");
                Console.WriteLine("4 - Ajuste Positivo de Inventario"); 
                Console.WriteLine("5 - Ajuste Negativo de Inventario");                
                Console.WriteLine("0 - Salir");
                opcion = Console.ReadLine();

                switch (opcion)
                {
                    case "1": 
                        listarProductos();
                        break;
                    case "2":
                        ingresoDeInventario();
                        break;
                    case "3":
                        salidaDeInventario();
                        break;
                    case "4":
                        ajustePositivoDeInventario();
                        break;
                    case "5":
                        ajusteNegativoDeInventario();
                        break;
                    default:
                    break;
                }

                if (opcion == "0") {
                    break;
                }
            }            
        }
    }
}