//
//  main.cpp
//  CG Lab2
//
//  Created by Влад Мазур on 3/30/14.
//  Copyright (c) 2014 Vlad Mazur. All rights reserved.
//

#include "CG.h"

int main(int argc, const char * argv[])
{
    Polygon pol;
    vector<Point> verxs;
    verxs.push_back(Point(2, 2));
    verxs.push_back(Point(3, 3));
    verxs.push_back(Point(6, 1));
    verxs.push_back(Point(4, -2));
    pol.vertexes = verxs;
    
    cout << pol.hasPoint( Point(3,2) ) << "\n";
    cout << pol.hasPoint( Point(5,2) ) << "\n";
    cout << pol.hasPoint( Point(2,2) ) << "\n";
    cout << pol.hasPoint( Point(6,-1) ) << "\n";
    cout << pol.hasPoint( Point(6,1) ) << "\n\n";
    
    verxs.clear();
    verxs.push_back(Point(2, 1));
    verxs.push_back(Point(2, 2));
    verxs.push_back(Point(3, 3));
    verxs.push_back(Point(6, 1));
    verxs.push_back(Point(4, -2));
    pol.vertexes = verxs;
    
    cout << pol.hasPoint( Point(3,2) ) << "\n";
    cout << pol.hasPoint( Point(5,2) ) << "\n";
    cout << pol.hasPoint( Point(2,2) ) << "\n";
    cout << pol.hasPoint( Point(6,-1) ) << "\n";
    cout << pol.hasPoint( Point(6,1) ) << "\n\n";
    
}

