//
//  Album.h
//  Thousand Words
//
//  Created by Angeleah Daidone on 4/7/14.
//  Copyright (c) 2014 Angeleah Daidone. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Album : NSManagedObject

@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSDate * date;

@end
