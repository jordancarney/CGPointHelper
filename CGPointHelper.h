//
//  CGPointHelper.h
//  
//
//  Created by Jordan Carney on 12/16/13.
//
//

#ifndef _CGPointHelper_h
#define _CGPointHelper_h

#import <CoreGraphics/CGGeometry.h>

/**
 * vector-scalar product
 */
CGPoint CGPointMultiply(CGPoint a, CGFloat s);

/**
 * vector sum
 */
CGPoint CGPointAdd(CGPoint a1, CGPoint a2);

/**
 * vector difference
 */
CGPoint CGPointSubtract(CGPoint a1, CGPoint a2);

/**
 * cross product
 */
CGFloat CGPointCross(CGPoint a1, CGPoint a2);

/**
 * dot product
 */
CGFloat CGPointDot(CGPoint a1, CGPoint a2);

/**
 * magnitude
 */
CGFloat CGPointMagnitude(CGPoint a);

/**
 * normalize 2d vector
 */
CGPoint CGPointNormalize(CGPoint a);

/**
 * square length from origin
 */
CGFloat CGPointSquareLengthFromOrigin(CGPoint a);

/**
 * distance between vectors
 */
CGFloat CGPointDistance(CGPoint a1, CGPoint a2);

#endif
