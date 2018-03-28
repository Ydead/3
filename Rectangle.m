//
//  Rectangle.m
//  3homework
//
//  Created by Profsoft on 23/03/2018.
//  Copyright © 2018 Profsoft. All rights reserved.
//

#import "Rectangle.h"

@implementation Rectangle

-(instancetype) initWithSideA:(int)a andSideB:(int)b {
    self = [super init];
    
    if (self){
        _a=a;
        _b=b;
    }
    
    return self;
}

@end
