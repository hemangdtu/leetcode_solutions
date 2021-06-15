class Solution {
private:
    double get_area(int x1, int y1, int x2, int y2, int x3, int y3)
    {
        return (0.5) * abs( x1*y2 + x2*y3 + x3*y1 - x2*y1 - x3*y2 - x1*y3 );
    }
    
public:
    double largestTriangleArea(vector<vector<int>>& points) {
        double area = 0;
        for(int i=0; i<points.size(); i++)
            for(int j=i+1; j<points.size(); j++)
                for(int k=j+1; k<points.size(); k++)
                    area = max(area, get_area( points[i][0], points[i][1], points[j][0], points[j][1], points[k][0], points[k][1]));
        return area;
    }
};