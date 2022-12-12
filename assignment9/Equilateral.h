//equilateral class with functions as specified
class Equilateral : public Triangle
{
    private:
        int side_l; // side length of each side of the triangle

    public:
        Equilateral(double x_1); //constructor reading in x point for 2nd vertex
        static int equiCount; // keeps track of the number of equilateral objects instantiated
        double area(); // overriding method for use with 1 length
        double perimeter(); // overriding method for use with 1 length

    friend void print_Equi_details(Equilateral); // friend which prints the value of the length of the side of an Equilateral object
};
