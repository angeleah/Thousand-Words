//
//  TWCoreDataHelper.m
//  Thousand Words
//
//  Created by Angeleah Daidone on 4/7/14.
//  Copyright (c) 2014 Angeleah Daidone. All rights reserved.
//

#import "TWCoreDataHelper.h"

@implementation TWCoreDataHelper

+(NSManagedObjectContext *)managedObjectContext
{
    NSManagedObjectContext *context = nil;
    id delegate = [[UIApplication sharedApplication] delegate];
    
    if (([delegate performSelector:@selector(managedObjectContext)])) {
        context = [delegate managedObjectContext];
        
    }
    return context;
}

@end
