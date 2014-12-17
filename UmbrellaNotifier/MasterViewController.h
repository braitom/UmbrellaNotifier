//
//  MasterViewController.h
//  UmbrellaNotifier
//
//  Created by braitom on 2014/12/16.
//  Copyright (c) 2014年 braitom. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;


@end

