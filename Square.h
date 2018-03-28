//
//  Square.h
//  3homework
//
//  Created by Profsoft on 23/03/2018.
//  Copyright © 2018 Profsoft. All rights reserved.
//

#import "Rectangle.h"
@interface Square : Rectangle
@property (nonatomic, readonly) int side;

-(instancetype) initWithSide:(int)side;

@end
