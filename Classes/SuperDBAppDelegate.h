//
//  SuperDBAppDelegate.h
//  SuperDB
//
//  Created by BRETT WEIK-ULRICH on 4/15/10.
//  Copyright Uninteractive 2010. All rights reserved.
//

@interface SuperDBAppDelegate : NSObject <UIApplicationDelegate> {

    NSManagedObjectModel *managedObjectModel;
    NSManagedObjectContext *managedObjectContext;	    
    NSPersistentStoreCoordinator *persistentStoreCoordinator;

    UIWindow *window;
	
	// declaring an outlet for the root view
	UINavigationController *navController; 
}

@property (nonatomic, retain, readonly) NSManagedObjectModel *managedObjectModel;
@property (nonatomic, retain, readonly) NSManagedObjectContext *managedObjectContext;
@property (nonatomic, retain, readonly) NSPersistentStoreCoordinator *persistentStoreCoordinator;

@property (nonatomic, retain) IBOutlet UIWindow *window;

// finsihes the additions to this header
@property (nonatomic, retain) IBOutlet UINavigation *navController; 

- (NSString *)applicationDocumentsDirectory;

@end

