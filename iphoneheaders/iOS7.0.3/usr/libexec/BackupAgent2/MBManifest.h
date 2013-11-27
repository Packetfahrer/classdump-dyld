/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:54:56 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/BackupAgent2
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class MBProperties, MBDatabase, MBDatabaseIndex;

@interface MBManifest : NSObject {

	MBProperties* _properties;
	MBDatabase* _database;
	MBDatabaseIndex* _databaseIndex;

}

@property (nonatomic,readonly) MBProperties * properties;                    //@synthesize properties=_properties - In the implementation block
@property (nonatomic,readonly) MBDatabase * database;                        //@synthesize database=_database - In the implementation block
@property (nonatomic,readonly) MBDatabaseIndex * databaseIndex; 
+(id)manifestWithProperties:(id)arg1 database:(id)arg2 databaseIndex:(id)arg3 ;
-(void)buildIndexFromDatabaseIfNeeded;
-(id)databaseIndex;
-(id)initWithProperties:(id)arg1 database:(id)arg2 databaseIndex:(id)arg3 ;
-(id)fileWithID:(id)arg1 ;
-(id)fileEnumerator;
-(BOOL)containsFileWithID:(id)arg1 ;
-(id)database;
-(void)dealloc;
-(id)properties;
@end
