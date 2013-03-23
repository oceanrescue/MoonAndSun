//
//  AstroSmall.h
//  AstroSmall
//
//  Created by submarine on 11/3/12.
//  Copyright (c) 2012 submarine. All rights reserved.
//


/*
 *  Dictionary keys
 */
#define kAstroRiseValid @"kAstroRiseValid"
#define kAstroRise @"kAstroRise"
#define kAstroTransit @"kAstroTransit"
#define kAstroSet @"kAstroSet"
#define kAstroSetValid @"kAstroSetValid"

//Moon Phase:
//right side illuminated: 0 - 180 degrees
//left side illuminated:  180 - 360 degrees
//0 degrees = new moon
//90 degrees = first quarter (right half illuminated)
//180 degrees = full moon
//270 degrees = last quarter (left half illuminated)

//    < 90° round right + cut out right
//    90-180 round right + addition left
//    phase >= 180 && phase < 270 - round left + addition right
//    > 270 - round left + cut out left
#define kAstroPhase @"kAstroPhase"

#define kAstroPositionAngle @"kAstroPositionAngle"
#define kAstroPhaseAngle @"kAstroPhaseAngle"



#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>
@interface AstroSmall : NSObject
+ (NSDictionary*) sunData:(NSDate *)date forLocation:(CLLocationCoordinate2D)location;
+ (NSDictionary*) moonData:(NSDate *)date forLocation:(CLLocationCoordinate2D)location;
@end
