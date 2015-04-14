//
//  Caculator.h
//  week2tute
//
//  Created by double on 14/04/2015.
//  Copyright (c) 2015 double. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Caculator : NSObject

@property (nonatomic) double first;
@property (nonatomic) double second;

- (id)initWithFirst:(double)first andSecond:(double)second;
- (double) calculatePlusResult;
- (double) calculateSubtractResult;
- (double) calculateMultiplyResult;
- (double) calculateDivideResult;



@end
