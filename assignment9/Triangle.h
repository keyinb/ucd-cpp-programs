//triangle class with functions as specified
class Triangle
{
    private:
        Point v1; // 1st vertex
        Point v2; // 2nd vertex
        Point v3; // 3rd vertex which will be set to 0,0,0

    public:
        static int triCount; // class-wide variable to keep track of the number of triangles created
        Triangle(double x_1, double y_1, double x_2, double y_2); // constructor with points given by user
        double area(); // returns area of a triangle
        double perimeter(); // returns perimeter of a triangle

    friend void print_Tri_details(Triangle); // friend function which has access to private fields of triangle class
};
