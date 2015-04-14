//
//  Caculator.m
//  week2tute
//
//  Created by double on 14/04/2015.
//  Copyright (c) 2015 double. All rights reserved.
//

#import "Caculator.h"

@implementation Caculator
//Initiation:
- (id)initWithFirst:(double)first andSecond:(double)second{
    //See if we can allocate memory
    //for object before allocating values.
    if (self = [super init]) {
        self.first = first;
        self.second = second;
        
    }
    return self;
}

//Methods:
- (double) calculatePlusResult{
    
}


@end
