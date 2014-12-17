//
//  Event.h
//  UmbrellaNotifier
//
//  Created by braitom on 2014/12/16.
//  Copyright (c) 2014年 braitom. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Event : NSManagedObject

@property (nonatomic, retain) NSNumber * enter;
@property (nonatomic, retain) NSDate * timeStamp;

- (NSString *)dateString;

@end
