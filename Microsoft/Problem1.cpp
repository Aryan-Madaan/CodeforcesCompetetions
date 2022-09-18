#include <map>
#include <set>
#include <vector>
#include <iostream>
 
struct StraightLine
{
    double a,b,c;
    StraightLine() : a(0.),b(0.),c(0.){}
    bool isValid() { return a!=0. || b!= 0.; }
    bool operator<(StraightLine const& other) const
    {
        if( a < other.a ) return true;
        if( a > other.a ) return false;
        if( b < other.b ) return true;
        if( b > other.b ) return false;
        if( c < other.c ) return true;
        return false;
    }
};
 
struct Point { 
    double x, y; 
    Point() : x(0.), y(0.){}
    Point(double p_x, double p_y) : x(p_x), y(p_y){}
};
 
StraightLine computeLine(Point const& p1, Point const& p2)
{
    StraightLine line;
    if( p2.x-p1.x != 0.)
    {
        line.b = -1;
        line.a = (p2.y - p1.y)/(p2.x - p1.x);
    }
    else if( p2.y - p1.y != 0. )
    {
        line.a = -1;
        line.b = (p2.x-p1.x)/(p2.y-p1.y);
    }
    line.c = - line.a * p1.x - line.b * p1.y;
    return line;
}
 
int main()
{
    std::vector<Point> points(9);
    for( int i = 0 ; i < 3 ; ++i )
    {
        for( int j = 0; j < 3 ; ++j )
        {
            points[i*3+j] = Point((double)i, (double)j);
        }
    }
 
 
    size_t nbPoints = points.size();
    typedef std::set<size_t> CollinearPoints;
    typedef std::map<StraightLine, CollinearPoints> Result;
    Result result;
 
    for( int i = 0 ; i < nbPoints ; ++i )
    {
        for( int j = i + 1 ; j < nbPoints ; ++j )
        {
            StraightLine line = computeLine(points[i], points[j]);
            if( line.isValid() )
            {
                result[line].insert(i);
                result[line].insert(j);
            }
        }
    }
 
    for( Result::iterator currentLine = result.begin() ; currentLine != result.end(); ++currentLine )
    {
        if( currentLine->second.size() <= 2 )
        {
            continue;
        }
        std::cout << "Line";
        for( CollinearPoints::iterator currentPoint = currentLine->second.begin() ; currentPoint != currentLine->second.end() ; ++currentPoint )
        {
            std::cout << " ( " << points[*currentPoint].x << ", " << points[*currentPoint].y << ")";
        }
        std::cout << std::endl;
    }
    return 0;
}