//
//  CGPointHelper.c
// 
//
//  Created by Jordan Carney on 12/16/13.
//
//

#include "CGPointHelper.h"
#include <math.h>

CGPoint CGPointMultiply(CGPoint a, CGFloat s) {
    return CGPointMake(a.x*s, a.y*s);
}

CGPoint CGPointAdd(CGPoint a1, CGPoint a2) {
    return CGPointMake(a1.x + a2.x, a1.y + a2.y);
}

CGPoint CGPointSubtract(CGPoint a1, CGPoint a2) {
    return CGPointMake(a1.x - a2.x, a1.y - a2.y);
}

CGFloat CGPointCross(CGPoint a1, CGPoint a2) {
    return a1.x*a2.y - a2.x*a1.y;
}

CGFloat CGPointDot(CGPoint a1, CGPoint a2) {
    return a1.x*a2.x + a1.y*a2.y;
}

CGFloat CGPointMagnitude(CGPoint a) {
    return sqrt(CGPointDot(a, a));
}

CGPoint CGPointNormalize(CGPoint a) {
    return CGPointMultiply(a, 1.0 / CGPointMagnitude(a));
}

CGFloat CGPointSquareLengthFromOrigin(CGPoint a) {
    return CGPointDot(a, a);
}

CGFloat CGPointDistance(CGPoint a1, CGPoint a2) {
    return CGPointMagnitude(CGPointSubtract(a1, a2));
}