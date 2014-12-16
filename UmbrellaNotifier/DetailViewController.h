//
//  DetailViewController.h
//  UmbrellaNotifier
//
//  Created by kaigi on 2014/12/16.
//  Copyright (c) 2014年 braitom. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

