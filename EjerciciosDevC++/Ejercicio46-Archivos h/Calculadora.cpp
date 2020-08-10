int sumar (int a, int b)
{
	return a + b;
}
int restar (int a, int b)
{
	return a - b;
}
int calcular (int a, int b, char operador)
{
	if (operador == '+')
	{
		return sumar(a,b);
	}
	if (operador == '-')
	{
		return restar(a , b);
	}
	
	throw "operador no valido";
}
