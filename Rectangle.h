//
//  Rectangle.h
//  3homework
//
//  Created by Profsoft on 23/03/2018.
//  Copyright © 2018 Profsoft. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Rectangle : NSObject
@property (nonatomic, readonly) int a;
@property (nonatomic, readonly) int b;

-(instancetype) initWithSideA:(int)a andSideB:(int)b;

@end;
