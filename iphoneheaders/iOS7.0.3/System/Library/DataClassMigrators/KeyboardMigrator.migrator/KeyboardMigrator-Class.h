/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:42:28 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/DataClassMigrators/KeyboardMigrator.migrator/KeyboardMigrator
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <DataMigration/DataClassMigrator.h>

@class CPBitmapStore;

@interface KeyboardMigrator : DataClassMigrator {

	CPBitmapStore* _store;

}

@property (@dynamic,readonly) CPBitmapStore * store; 
-(id)dataClassName;
-(BOOL)performMigration;
-(float)estimatedDuration;
-(id)store;
-(void)dealloc;
@end
