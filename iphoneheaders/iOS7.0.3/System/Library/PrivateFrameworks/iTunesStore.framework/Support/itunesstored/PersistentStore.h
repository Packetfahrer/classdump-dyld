/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:46:35 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class PersistentStoreConfiguration, NSManagedObjectModel, NSPersistentStoreCoordinator, NSString, NSURL;

@interface PersistentStore : NSObject {

	PersistentStoreConfiguration* _configuration;
	NSManagedObjectModel* _model;
	NSPersistentStoreCoordinator* _storeCoordinator;
	NSString* _threadContextKey;
	NSString* _threadCountKey;

}

@property (readonly) PersistentStoreConfiguration * configuration; 
@property (readonly) NSURL * databaseFileURL; 
@property (readonly) NSURL * modelFileURL; 
-(id)databaseFileURL;
-(void)checkIntegrityWithInitializationBlock:(/*^block*/ id)arg1 ;
-(id)beginThreadContextSession;
-(void)endThreadContextSession;
-(id)initWithConfiguration:(id)arg1 error:(id*)arg2 ;
-(BOOL)_loadStoreCoordinatorWithIntegrityCheck:(BOOL)arg1 error:(id*)arg2 ;
-(id)_baseFilePath;
-(id)_newLegacyManagedObjectModel;
-(BOOL)performLightweightMigration:(id*)arg1 ;
-(id)modelFileURL;
-(BOOL)loadStoreCoordinatorWithOptions:(id)arg1 error:(id*)arg2 ;
-(BOOL)resetStore:(id*)arg1 ;
-(void)dealloc;
-(id)init;
-(id)managedObjectModel;
-(id)configuration;
@end
