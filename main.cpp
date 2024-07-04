class Adder
{
    Adder()
    {
        int a = 0;
    };

    void add_int(int a, int b)
    {
        int c = a + b;
    }

    void add_float(float a, float b)
    {
        float c = a + b;
    }

    double add_double(double a, double b)
    {
        double c = a + b;
        return c;
    }
};
