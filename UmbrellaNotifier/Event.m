//
//  Event.m
//  UmbrellaNotifier
//
//  Created by braitom on 2014/12/16.
//  Copyright (c) 2014年 braitom. All rights reserved.
//

#import "Event.h"


@implementation Event

@dynamic enter;
@dynamic timeStamp;

- (NSString *)dateString
{
    NSDateFormatter *formatter = [NSDateFormatter new];
    [formatter setDateFormat:@"yyyy-MM-dd"];
    
    return [formatter stringFromDate:self.timeStamp];
}

@end
