//
//  TWAlbumTableViewController.h
//  Thousand Words
//
//  Created by Angeleah Daidone on 4/7/14.
//  Copyright (c) 2014 Angeleah Daidone. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TWAlbumTableViewController : UITableViewController

@property (strong, nonatomic) NSMutableArray *albums;
- (IBAction)addAlbumBarButtonItemPressed:(UIBarButtonItem *)sender;

@end
